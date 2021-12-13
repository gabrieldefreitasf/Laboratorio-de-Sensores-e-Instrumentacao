// Controle de Motores de Passo Baseado em Driver a4988 em Experimento RPS -  Calibraçao automatica dos motores de passo
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Eduardo Lins

//OBS1: k[0] = constante angulo/passo [rad/passo] do motor de rotaçao
//      k[1] = constante distancia/passo [mm/passo] do motor de translaçao do eixo x
//      k[2] = constante distancia/passo [mm/passo] do motor de translaçao do eixo y

//OBS2: d[0] = Distancia entre as amplitudes de movimento de rotaçao 
//      d[1] = Distancia entre as amplitudes de movimento de translaçao do eixo x
//      d[2] = Distancia entre as amplitudes de movimento de translaçao do eixo y

const float k[3];                                     //Armazenamento das constantes de passo dos motores 
const float d[3];                                     //Armazenamento das distancias entre as amplitudes
float passosREV;                                      //quantidade de passos necessária para o motor ir de uma amplitude à outra
const int sensor = 19;                                //GPIOs da ESP-32 que vai receber a tensao digital nas amplitudes
const int stepPin = 5;                                //
const int dirPin = 17;                                //
const int stepPinx = 5;                               //GPIOs usadas no controle dos passos e das direçoes dos motores de
const int dirPinx =  17;                              //
const int stepPiny = 2;                               //
const int dirPiny = 15;                               //
int step[3] = 
int dir[3] = 
const int t=1000;                                     //metade do tempo em microsegundos entre um passo e outro
      int j = 0;                                      //variável de contagem


void setup() {
  
Serial.begin(115200);
pinMode(19, INPUT_PULLDOWN);       
pinMode(5,OUTPUT);       
pinMode(17,OUTPUT);

}


void loop() {

   delay(1000); 

   do{
   digitalWrite(dir[j],LOW);                           // define um sentido de rotação (a priori pode ser arbitrário) 
   Serial.println("esperando");
   while(digitalRead(sensor) == LOW)                   //Rotaciona o eixo até chegar à extremidade
      {
         digitalWrite(step[j],HIGH);
         delayMicroseconds(t);
         digitalWrite(step[j],LOW)
         delayMicroseconds(t);
      }
    Serial.println("primeiro toque");                  // avisa na serial quando o eixo chegar até a extremidade
    delay(500);                      

    digitalWrite(dir[j],HIGH);                         // Define o sentido de rotação contrário, agora o motor deve rotacionar de uma extremidade à outra
      
  
    Serial.println("girando"); 
    while(digitalRead(sensor) == HIGH)
       {  
          digitalWrite(step[j],HIGH);
           passosREV++;                                //conta cada passo dado até chegar na outra extremidade
          delayMicroseconds(t); 
          digitalWrite(step[j],LOW);
          delayMicroseconds(t);
       }

    while(digitalRead(sensor) == LOW)
       {  
          digitalWrite(step[j],HIGH);
           passosREV++;                                 //conta cada passo dado até chegar na outra extremidade
          delayMicroseconds(t);
          digitalWrite(step[j],LOW);
          delayMicroseconds(t);
       }     
       
    Serial.println("segundo toque");                    //avisa na serial quando o eixo chegar à outra extremidade
    Serial.println(passosREV);                          //printa a quantidade de passos dados
    delay(500);
    digitalWrite(dir[j],LOW);                           //muda novamente o sentido de rotação
    Serial.println("centralizando");
    
   for(int i = 0; i < (int)(passosREV/2); i++)           //posiciona o sistema na posição de origem
      {
        digitalWrite(step[j],HIGH);
        delayMicroseconds(t);
        digitalWrite(step[j],LOW);
        delayMicroseconds(t);
      }
     
   k[j] = (float)(d[j]/passosREV);                     //Calcula a constante k
   Serial.print("k=");
   Serial.println(k[j],10);
   Serial.println(":::::::::::::::::::::::::::::::");
   passosREV = 0;
   }while(j<3);

   delay(1000); 
}
