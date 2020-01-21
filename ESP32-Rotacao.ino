// Controle de Motores de Passo Baseado em Driver a4988 em Experimento RPS - Motor do estágio de rotação
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Gabriel de Freitas
// OBS: 6.163° / revolução. 1 passo rotaciona 0,061°
// OBS2: 0.011mm/ passo
//---------------------------------------------------
#include <math.h>
const int stepPin = 16;
const int dirPin = 19;
const int stepPinx = 15;
const int DirPinx = 14;
const int MS1 = 9;
const int MS2 = 10;
const int MS3 = 11;
float pi = 3.14159;
// Definição de parâmetros do prisma
float alpha = pi/4;             //Ângulo em rad
float beta = pi/4;
float gama = pi/4;
float w = 0;                    //Posição atual do feixe na face superior do prisma, inicialmente 0
float a, b, c;                  //Dimensões do prisma (em mm)
float n;                        //Índice de refração do prisma
//Fim da definição de parâmetros do prisma
//Definições de variáveis úteis para correção da posição do feixe
float l;                        //Variável auxiliar no cálculo (pode ser excluída depois)
float d;                        //Distância necessária transladar para manter feixe no mesmo ponto
float theta_r;                  //Ângulo refratado. Útil no cálculo de d
float r;                        //Raio da circunferência inscrita
//Fim das definições de variáveis

void setup() {
Serial.begin(115200);
}

void loop() {
  float theta = 0;                //Ângulo a ser rotacionado [Receber do Usuário]
  if (theta<0){                   //Verifica para qual lado deve rotacionar
    digitalWrite(dirPin, HIGH);   //Rotaciona para região negativa(Esquerda)
  }
  else{
    digitalWrite(dirPin, LOW);    //Rotaciona para região positiva (Direita)
  }
  if(theta<0.003)
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,HIGH);
  }
  if(theta<0,007)
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,LOW);
  }
  if(theta<0,015)
  {
    digitalWrite(MS1,LOW);
    digitalWrite(MS2,HIGH);
    digitalWrite(MS3,LOW); 
  }
  if(theta<0,03)
  {
    digitalWrite(MS1,HIGH);
    digitalWrite(MS2,LOW);
    digitalWrite(MS3,LOW);
  }
  else
  {
    digitalWrite(MS1, LOW);
    digitalWrite(MS2, LOW);
    digitalWrite(MS3, LOW);
  }
 
  for(int i = 0; i < (theta/0,061); i++)    //Dá o número de passos relacionado ao ângulo a ser rotacionado - Atenção para a imprecisão nesse for
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
  
  if (d<0)                                  //Verifica se translada no sentido +x ou -x (VERIFICAR ISSO NO MOTOR)
  {                   
    digitalWrite(dirPin, HIGH);             //Translada para região negativa(Esquerda)
  }
  else{
    digitalWrite(dirPin, LOW);               //Translada para região positiva (Direita)
  }
  for (int i=0; i < d/0,011; i++)           //Dá o número de passos relacionado a distância a ser transladada em mm
  {
    digitalWrite(stepPinx, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPinx,LOW);
    delayMicroseconds(500);
  }
}
