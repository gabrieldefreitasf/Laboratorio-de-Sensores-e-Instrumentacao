//Aquisição+Rotação - Código para ESP32, controle baseado em driver a4988
//Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
//Gabriel de Freitas
//OBS: 6.163° / revolução. 1 passo rotaciona 0.061°
//OBS2: 0.011mm/passo
//OBS3: Cálculos executados são desenvolvidos no artigo: "Maintaining a stationary laser footprint during angular scan in internal-reflection experiments" - E. Fontana
//---------------------------------------------------
#include <math.h>
const int stepPin = 16;
const int dirPin = 19;
const int stepPinx = 15;
const int DirPinx = 14;
const int MS1 = 9;
const int MS2 = 10;
const int MS3 = 11;
// Declaração de Entradas Analógicas
const int foto1 = 34;                                   // Fotodetector de referência é conectado ao GPIO 34 (Analog ADC1_CH6)
const int foto2 = 35;                                   // Fotodetector de saída é conectado ao GPIO 35 (Analog ADC1_CH7)
//Fim das entradas analógicas
//Variáveis para aquisição de dados
int ValorFoto1 = 0;                                   //Variável para fotodetector de referência (foto1)
int ValorFoto2 = 0;                                   //Variável para fotodetector de saída (foto2)
int N;                                                //Número de médias para obtenção de um ponto na curva de reflectância
float R = 0;                                          //Valor médio de reflectância (Será plotado no gráfico)
float soma = 0;                                       //Variável auxiliar para cálculo de média
float reflect[2];                                     //Vetor para armazenar valores adquiridos de reflectância(Tem que ter o tamanho de N)
//Fim das variáveis para aquisição de dados
float pi = 3.14159;
// Definição de parâmetros do prisma
float alpha = pi/4;                                     //Ângulo em rad
float beta = pi/4;
float gama = pi/4;
float w = 0;                                            //Posição atual do feixe na face superior do prisma, inicialmente 0
float a, b, c;                                          //Dimensões do prisma (em mm)
float n;                                                //Índice de refração do prisma
//Fim da definição de parâmetros do prisma
//Definições de variáveis úteis para correção da posição do feixe (Proveniente do artigo)
float theta;                                            //Ângulo a ser rotacionado
float theta_atual;                                      //Ângulo que o sistema está, essa variável vai ser usada para plotar o gráfico.
float l;                                                //Variável auxiliar no cálculo (pode ser excluída depois)
float d;                                                //Distância necessária transladar para manter feixe no mesmo ponto
float theta_r;                                          //Ângulo refratado. Útil no cálculo de d
float r;                                                //Raio da circunferência inscrita
//Fim das definições de variáveis

void setup() 
{
  Serial.begin(115200);
  analogReadResolution(12);                             //Número de bits do ADC
  adcAttachPin(34);                                     //Selecionando pino 34 para ADC
  adcAttachPin(35);                                     //Selecionando pino 35 para ADC
  analogSetSamples(1);                                  //Selecionando número de amostras
  analogSetPinAttenuation(34,ADC_0db);                  //Seleciona atenuação de 0db no pino 34
  analogSetPinAttenuation(35,ADC_0db);                  //Seleciona atenuação de 0db no pino 35
}

void adquirir()                                         //Adquire um ponto de reflectância a partir de média de N pontos. 
{
  for (int i=0; i<N; i++)
  {
  ValorFoto1 = analogRead(foto1);                       //Lê valor do fotodetector de REFERÊNCIA
  adcBusy(34);                                          //Verifica se está ocorrendo conversão no pino 34, esse comando retorna verdadeiro ou falso
  ValorFoto2 = analogRead(foto2);                       //Lê valor do fotodetector de SAÍDA
  adcBusy(35);                                          //Verifica se está ocorrendo conversão no pino 34, esse comando retorna verdadeiro ou falso
  reflect[i] = ValorFoto2/ValorFoto1;
  soma = soma+ reflect[i];
  }
  R = soma/N;
  delayMicroseconds(500);
}

void rotacionar (float theta)
{
  if (theta<0){                                         //Verifica para qual lado deve rotacionar
  digitalWrite(dirPin, HIGH);                           //Rotaciona para região negativa(Esquerda)
  }
  else{
    digitalWrite(dirPin, LOW);                          //Rotaciona para região positiva (Direita)
  }
  if(theta<0.003)                                       //Passo subdividido em 1/16
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,HIGH);
  }
  if(theta<0,007)                                       //Passo subdividido em 1/8
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,LOW);
  }
  if(theta<0,015)                                       //Passo subdividido em 1/4
  {
    digitalWrite(MS1,LOW);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,LOW); 
  }
  if(theta<0,03)                                        //Passo subdividido em 1/2
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,LOW);
    digitalWrite(MS3,LOW);
  }
  else                                                  //Passo completo
  {
    digitalWrite(MS1, LOW);
    digitalWrite(MS2, LOW);
    digitalWrite(MS3, LOW);
  }
  for(int i = 0; i < (int)(theta/0,061); i++)           //Dá o número de passos relacionado ao ângulo a ser rotacionado - Atenção para a imprecisão nesse for
  {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
  
  l = a*sin(beta/2)*cos(alpha/2)/sin((alpha+beta)/2);
  r = a/(cos(alpha/2)/sin(alpha/2) + cos(beta/2)/sin(beta/2));
  theta_r = asin(sin(theta)/n);
  d = -w + (1/cos(alpha+theta))*(2*sin(theta/2)*((-l+a/2)*sin(alpha+theta/2)+r*cos(alpha+theta/2)) - (w+alpha/2)*sin(alpha)*sin(theta - theta_r)/cos(theta_r));

  if (d<0)                                             //Verifica se translada no sentido +x ou -x (VERIFICAR ISSO NO MOTOR)
  {                   
    digitalWrite(DirPinx, HIGH);                       //Translada para região negativa(Esquerda)
  }
  else{
    digitalWrite(DirPinx, LOW);                        //Translada para região positiva (Direita)
  }
  for (int i=0; i < (int)(d/0,011); i++)               //Dá o número de passos relacionado a distância a ser transladada em mm
  {
    digitalWrite(stepPinx, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPinx,LOW);
    delayMicroseconds(500);
  }
  theta_atual = theta_atual+theta;
}

void loop()
{
  adquirir();
  rotacionar(theta);
  Serial.println(R,theta_atual);
}
