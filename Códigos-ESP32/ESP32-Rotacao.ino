// Controle de Motores de Passo Baseado em Driver a4988 em Experimento RPS - Motor do estágio de rotação
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Gabriel de Freitas
// OBS: 6.163° / revolução. 1 passo rotaciona 0,031°, ou seja, 0,00054105207 rad
// OBS2: 0.0065 mm/ passo (Obtido experimentalmente para x)
// OBS3: 0.006 mm/passo (Obtido experimentalmente para y)
// OBS4: Cálculos executados são desenvolvidos no artigo: "Maintaining a stationary laser footprint during angular scan in internal-reflection experiments" - E. Fontana e G. Cavalcanti
//---------------------------------------------------
#include <math.h>
const int stepPin = 5;
const int dirPin = 17;
const int stepPinx = 2;
const int dirPinx = 15;
const int MS1 = 21;
const int MS2 = 19;
const int MS3 = 18;
float pi = 3.14159;
// Definição de parâmetros do prisma
float alpha = pi/4;             //Ângulo em rad
float beta = pi/4;
float gama = pi/4;
float w = 0;                    //Posição atual do feixe na face superior do prisma, inicialmente 0
float a = 50;                   //Dimensões do prisma (em mm)
float b = 50;
float c = 50;
float n = 1.5;                  //Índice de refração do prisma
//Fim da definição de parâmetros do prisma
//Definições de variáveis úteis para correção da posição do feixe (Proveniente do artigo)
float theta_atual = 0;              //Ângulo que o sistema está, vai ser usado na construção do gráfico.
float l;                        //Variável auxiliar no cálculo
float d;                        //Distância necessária transladar para manter feixe no mesmo ponto
float theta_r;                  //Ângulo refratado. Útil no cálculo de d
float r;                        //Raio da circunferência inscrita
//Fim das definições de variáveis

void setup() {
Serial.begin(115200);
pinMode(5, OUTPUT);
pinMode(17, OUTPUT);
pinMode(2, OUTPUT);
pinMode(15, OUTPUT);
pinMode(21, OUTPUT);
pinMode(19, OUTPUT);
pinMode(18, OUTPUT);
}

void loop() {
  delay(1000);
  float theta = 0.523599;                //Ângulo em radiano a ser rotacionado [Receber do Usuário]
  if (theta<0){                   //Verifica para qual lado deve rotacionar
    digitalWrite(dirPin, HIGH);   //Rotaciona para região negativa(Sentido Anti-Horário)
  }
  else{
    digitalWrite(dirPin, LOW);    //Rotaciona para região positiva (Sentido Horário)
  }
  if(abs(theta)<0.000034)                 // Passo subdividido em 1/16, (0,00054105207 rad/16)
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,HIGH);
  }
  if(abs(theta)<0.000068)                 // Passo subdividido em 1/8
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,LOW);
  }
  if(abs(theta)<0.00013)                 // Passo subdividido em 1/4
  {
    digitalWrite(MS1,LOW);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,LOW); 
  }
  if(abs(theta)<0.0003)                  // Passo subdividido em 1/2 - Esta resoluçãoangular corresponde à 0,015°
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,LOW);
    digitalWrite(MS3,LOW);
  }
  else                            // Passo completo
  {
    digitalWrite(MS1, LOW);
    digitalWrite(MS2, LOW);
    digitalWrite(MS3, LOW);
  }
 
  for(int i = 0; i < (int)(theta/0.00054105207); i++)    //Dá o número de passos relacionado ao ângulo a ser rotacionado - Atenção para a imprecisão nesse for
  {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(2000);
  }

  l = a*sin(beta/2)*cos(alpha/2)/sin((alpha+beta)/2);
  r = a/(cos(alpha/2)/sin(alpha/2) + cos(beta/2)/sin(beta/2));
  theta_r = asin(sin(theta)/n);
  d = -w + (1/cos(alpha+theta))*(2*sin(theta/2)*((-l+a/2)*sin(alpha+theta/2) + r*cos(alpha+theta/2)) - (w + a/2)*sin(alpha)*sin(theta - theta_r)/cos(theta_r));

  if (d>0)                                   //Verifica se translada no sentido +x ou -x (VERIFICAR ISSO NO MOTOR)
  {                   
    digitalWrite(dirPinx, HIGH);             //Translada para região negativa(Esquerda)
  }
  else{
    digitalWrite(dirPinx, LOW);              //Translada para região positiva (Direita)
  }
  
  for (int i=0; i < (int)(d/0.007); i++)     //Dá o número de passos relacionado a distância a ser transladada em mm
  {
    digitalWrite(stepPinx, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPinx,LOW);
    delayMicroseconds(2000);
  }
  theta_atual=theta_atual+theta;
  Serial.println(d);
  delay(5000);
}
