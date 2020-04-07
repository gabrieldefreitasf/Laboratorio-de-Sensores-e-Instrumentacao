// Controle de Motores de Passo Baseado em Driver a4988 em Experimento RPS - Movimento 2D
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Gabriel de Freitas
// OBS: 0.011mm/ passo (Obtido experimentalmente para x e y)
//-------------------------------------
#include <math.h>
float esp = 2;                                     // Espaçamento entre célular em mm
float x,y = 0;                                     // Posição em x e y em mm, sempre inicia-se em (0,0)
int celula;                                        // Célula que o reflectômetro deve se posicionar, receber valo de 0 a 120 do usuário
const int stepPinx = 18;
const int stepPiny = 19;
const int dirPinx = 20;
const int dirPiny = 21;
/*
int matriz2D[11][11]{
  {120,119,118,117,116,115,114,113,112,111,110},
  {109,108,107,106,105,104,103,102,101,100,99},
  {98,97,96,95,94,93,92,91,90,89,88},
  {87,86,85,84,83,82,81,80,79,78,77},
  {76,75,74,73,72,71,70,69,68,67,66},
  {65,64,63,62,61,60,59,58,57,56,55},
  {54,53,52,51,50,49,48,47,46,45,44},
  {43,42,41,40,39,38,37,36,35,34,33},
  {32,31,30,29,28,27,26,25,24,23,22},
  {21,20,19,18,17,16,15,14,13,12,11},
  {10,9,8,7,6,5,4,3,2,1,0},
};
*/
void setup() {
  Serial.begin(115200);
}

void loop() {

  switch(celula){
    case 120:
    {
    float posicao120_x = -5*esp;
    float posicao120_y = 5*esp;
    }
    break;
    case 119:
    {
    float posicao119_x = -4*esp;
    float posicao119_y = 5*esp;
    }
    break;
    case 118:
    {
    float posicao118_x = -3*esp;
    float posicao118_y = 5*esp;
    }
    break;
    case 117:
    {
    float posicao117_x = -2*esp;
    float posicao117_y = 5*esp;
    }
    break;
    case 116:
    {
    float posicao116_x = -esp;
    float posicao116_y = 5*esp;
    }
    break;
    case 115:
    {
    float posicao115_x = 0;
    float posicao115_y = 5*esp;
    }
    break;
    case 114:
    {
    float posicao114_x = esp;
    float posicao114_y = 5*esp;
    }
    break;
    case 113:
    {
    float posicao113_x = 2*esp;
    float posicao113_y = 5*esp;
    }
    break;
    case 112:
    {
    float posicao112_x = 3*esp;
    float posicao112_y = 5*esp;
    }
    break;
    case 111:
    {
    float posicao109_x = 4*esp;
    float posicao109_y = 5*esp;
    }
    break;
    case 110:
    {
    float posicao110_x = 5*esp;
    float posicao110_y = 5*esp;
    }
    break;
    case 109:
    {
    float posicao109_x = -5*esp;
    float posicao109_y = 4*esp;
    }
    break;
    case 108:
    {
    float posicao108_x = -4*esp;
    float posicao108_y = 4*esp;
    }
    break;
    case 107:
    {
    float posicao107_x = -3*esp;
    float posicao107_y = 4*esp;
    }
    break;
    case 106:
    {
    float posicao106_x = -2*esp;
    float posicao106_y = 4*esp;
    }
    break;
    case 105:
    {
    float posicao105_x = -esp;
    float posicao105_y = 4*esp;
    }
    break;
    case 104:
    {
    float posicao104_x = 0;
    float posicao104_y = 4*esp;
    }
    break;
    case 103:
    {
    float posicao103_x = esp;
    float posicao103_y = 4*esp;
    }
    break;
    case 102:
    {
    float posicao102_x = 2*esp;
    float posicao102_y = 4*esp;
    }
    break;
    case 101:
    {
    float posicao101_x = 3*esp;
    float posicao101_y = 4*esp;
    }
    break;
    case 100:
    {
    float posicao100_x = 4*esp;
    float posicao100_y = 4*esp;
    }
    break;
    case 99:
    {
    float posicao99_x = 5*esp;
    float posicao99_y = 4*esp;
    }
    break;
    case 98:
    {
    float posicao98_x = -5*esp;
    float posicao98_y = 3*esp;
    }
    break;
    case 97:
    {
    float posicao97_x = -4*esp;
    float posicao97_y = 3*esp;
    }
    break;
    case 96:
    {
    float posicao96_x = -3*esp;
    float posicao96_y = 3*esp;
    }
    break;
    case 95:
    {
    float posicao95_x = -2*esp;
    float posicao95_y = 3*esp;
    }
    break;
    case 94:
    {
    float posicao94_x = -esp;
    float posicao94_y = 3*esp;
    }
    break;
    case 93:
    {
    float posicao93_x = 0;
    float posicao93_y = 3*esp;
    }
    break;
    case 92:
    {
    float posicao92_x = esp;
    float posicao92_y = 3*esp;
    }
    break;
    case 91:
    {
    float posicao91_x = 2*esp;
    float posicao91_y = 3*esp;
    }
    break;
    case 90:
    {
    float posicao90_x = 3*esp;
    float posicao90_y = 3*esp;
    }
    break;
    case 89:
    {
    float posicao89_x = 4*esp;
    float posicao89_y = 3*esp;
    }
    break;
    case 88:
    {
    float posicao88_x = 5*esp;
    float posicao88_y = 3*esp;
    }
    break;
    case 87:
    {
    float posicao87_x = -5*esp;
    float posicao87_y = 2*esp;
    }
    break;
    case 86:
    {
    float posicao86_x = -4*esp;
    float posicao86_y = 2*esp;
    }
    break;
    case 85:
    {
    float posicao85_x = -3*esp;
    float posicao85_y = 2*esp;
    }
    break;
    case 84:
    {
    float posicao84_x = -2*esp;
    float posicao84_y = 2*esp;
    }
    break;
    case 83:
    {
    float posicao83_x = -esp;
    float posicao83_y = 2*esp;
    }
    break;
    case 82:
    {
    float posicao82_x = 0;
    float posicao82_y = 2*esp;
    }
    break;
    case 81:
    {
    float posicao81_x = esp;
    float posicao81_y = 2*esp;
    }
    break;
    case 80:
    {
    float posicao80_x = 2*esp;
    float posicao80_y = 2*esp;
    }
    break;
    case 79:
    {
    float posicao79_x = 3*esp;
    float posicao78_y = 2*esp;
    }
    break;
    case 78:
    {
    float posicao78_x = 4*esp;
    float posicao78_y = 2*esp;
    }
    break;
    case 77:
    {
    float posicao77_x = 5*esp;
    float posicao77_y = 2*esp;
    }
    break;
    case 76:
    {
    float posicao76_x = -5*esp;
    float posicao76_y = esp;
    }
    break;
    case 75:
    {
    float posicao75_x = -4*esp;
    float posicao75_y =esp;
    }
    break;
    case 74:
    {
    float posicao73_x = -3*esp;
    float posicao73_y = esp;
    }
    break;
    case 73:
    {
    float posicao73_x = -2*esp;
    float posicao73_y = esp;
    }
    break;
    case 72:
    {
    float posicao72_x = -esp;
    float posicao72_y = esp;
    }
    break;
    case 71:
    {
    float posicao71_x = 0;
    float posicao71_y = esp;
    }
    break;
    case 70:
    {
    float posicao70_x = esp;
    float posicao70_y = esp;
    }
    break;
    case 69:
    {
    float posicao69_x = 2*esp;
    float posicao69_y = esp;
    }
    break;
    case 68:
    {
    float posicao68_x = 3*esp;
    float posicao68_y = esp;
    }
    break;
    case 67:
    {
    float posicao67_x = 4*esp;
    float posicao67_y = esp;
    }
    break;
    case 66:
    {
    float posicao66_x = 5*esp;
    float posicao66_y = esp;
    }
    break;
    case 65:
    {
    float posicao65_x = -5*esp;
    float posicao65_y = 0;
    }
    break;
    case 64:
    {
    float posicao64_x = -4*esp;
    float posicao64_y = 0;
    }
    break;
    case 63:
    {
    float posicao63_x = -3*esp;
    float posicao63_y = 0;
    }
    break;
    case 62:
    {
    float posicao62_x = -2*esp;
    float posicao62_y = 0;
    }
    break;
    case 61:
    {
    float posicao61_x = -esp;
    float posicao61_y=0;
    }
    break;
    case 60:
    {
    float posicao60_x=0;                            // Define a posição em x e y para a célula em questão
    float posicao60_y=0;
    
    if ((posicao60_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < int(abs(posicao60_x - x)/0,011); i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao60_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < int(abs(posicao60_y - y)/0,011); i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao60_x - x;                            // Atualiza a posição em x e y
    y = posicao60_y - y;
    }
    break;
    
    case 59:
    {
    float posicao59_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao59_y=0;
    
    if ((posicao59_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < int(abs(posicao59_x - x)/0,011); i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao59_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < int(abs(posicao59_y - y)/0,011); i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao59_x - x;                            // Atualiza a posição em x e y
    y = posicao59_y - y;
    }
    break;
    case 58:
    {
    float posicao58_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao58_y=0;
    }
    break;
    case 57:
    {
    float posicao57_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao57_y=0;
    }
    break;
    case 56:
    {
    float posicao56_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao56_y=0;
    }
    break;
    case 55:
    {
    float posicao55_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao55_y=0;
    }
    break;
    case 54:
    {
    float posicao54_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao54_y= -esp;
    }
    break;
    case 53:
    {
    float posicao53_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao53_y= -esp;
    }
    break;
    case 52:
    {
    float posicao52_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao52_y= -esp;
    }
    break;
    case 51:
    {
    float posicao51_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao51_y= -esp;
    }
    break;
    case 50:
    {
    float posicao50_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao50_y= -esp;
    }
    break;
    case 49:
    {
    float posicao49_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao49_y= -esp;
    }
    break;
    case 48:
    {
    float posicao48_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao48_y= -esp;
    }
    break;
    case 47:
    {
    float posicao47_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao47_y= -esp;
    }
    break;
    case 46:
    {
    float posicao46_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao46_y= -esp;
    }
    break;
    case 45:
    {
    float posicao45_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao45_y= -esp;
    }
    break;
    case 44:
    {
    float posicao44_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao44_y= -esp;
    }
    break;
    case 43:
    {
    float posicao43_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao43_y= -2*esp;
    }
    break;
    case 42:
    {
    float posicao42_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao42_y= -2*esp;
    }
    break;
    case 41:
    {
    float posicao41_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao41_y= -2*esp;
    }
    break;
    case 40:
    {
    float posicao43_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao43_y= -2*esp;
    }
    break;
    case 39:
    {
    float posicao39_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao39_y= -2*esp;
    }
    break;
    case 38:
    {
    float posicao38_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao38_y= -2*esp;
    }
    break;
    case 37:
    {
    float posicao37_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao37_y= -2*esp;
    }
    break;
    case 36:
    {
    float posicao36_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao36_y= -2*esp;
    }
    break;
    case 35:
    {
    float posicao35_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao35_y= -2*esp;
    }
    break;
    case 34:
    {
    float posicao34_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao34_y= -2*esp;
    }
    break;
    case 33:
    {
    float posicao33_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao33_y= -2*esp;
    }
    break;
    case 32:
    {
    float posicao32_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao32_y= -3*esp;
    }
    break;
    case 31:
    {
    float posicao31_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao31_y= -3*esp;
    }
    break;
    case 30:
    {
    float posicao30_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao30_y= -3*esp;
    }
    break;
    case 29:
    {
    float posicao29_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao29_y= -3*esp;
    }
    break;
    case 28:
    {
    float posicao28_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao28_y= -3*esp;
    }
    break;
    case 27:
    {
    float posicao27_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao27_y= -3*esp;
    }
    break;
    case 26:
    {
    float posicao26_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao26_y= -3*esp;
    }
    break;
    case 25:
    {
    float posicao25_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao25_y= -3*esp;
    }
    break;
    case 24:
    {
    float posicao24_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao24_y= -3*esp;
    }
    break;
    case 23:
    {
    float posicao23_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao23_y= -3*esp;
    }
    break;
    case 22:
    {
    float posicao22_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao22_y= -3*esp;
    }
    break;
    case 21:
    {
    float posicao21_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao21_y= -4*esp;
    }
    break;
    case 20:
    {
    float posicao20_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao20_y= -4*esp;
    }
    break;
    case 19:
    {
    float posicao19_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao19_y= -4*esp;
    }
    break;
    case 18:
    {
    float posicao18_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao18_y= -4*esp;
    }
    break;
    case 17:
    {
    float posicao18_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao18_y= -4*esp;
    }
    break;
    case 16:
    {
    float posicao16_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao16_y= -4*esp;
    }
    break;
    case 15:
    {
    float posicao15_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao15_y= -4*esp;
    }
    break;
    case 14:
    {
    float posicao18_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao18_y= -4*esp;
    }
    break;
    case 13:
    {
    float posicao13_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao13_y= -4*esp;
    }
    break;
    case 12:
    {
    float posicao12_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao12_y= -4*esp;
    }
    break;
    case 11:
    {
    float posicao11_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao11_y= -4*esp;
    }
    break;
    case 10:
    {
    float posicao10_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao10_y= -5*esp;
    }
    break;
    case 9:
    {
    float posicao9_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao9_y= -5*esp;
    }
    break;
    case 8:
    {
    float posicao8_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao8_y= -5*esp;
    }
    break;
    case 7:
    {
    float posicao7_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao7_y= -5*esp;
    }
    break;
    case 6:
    {
    float posicao6_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao6_y= -5*esp;
    }
    break;
    case 5:
    {
    float posicao5_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao5_y= -5*esp;
    }
    break;
    case 4:
    {
    float posicao4_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao4_y= -5*esp;
    }
    break;
    case 3:
    {
    float posicao3_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao3_y= -5*esp;
    }
    break;
    case 2:
    {
    float posicao2_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao2_y= -5*esp;
    }
    break;
    case 1:
    {
    float posicao1_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao1_y= -5*esp;
    }
    break;
    case 0:
    {
    float posicao0_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao0_y= -5*esp;
    }
    break;
  }
  
}
