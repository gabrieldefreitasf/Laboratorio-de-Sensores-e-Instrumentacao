// Controle de Motores de Passo Baseado em Driver a4988 em Experimento RPS - Movimento 2D
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Gabriel de Freitas
//-------------------------------------
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
    
    if ((x - posicao60_x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < int(x - posicao60_x); i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((y - posicao60_y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < int(y - posicao60_y); i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = x - posicao60_x;                            // Atualiza a posição em x e y
    y = y - posicao60_y;
    }
    break;
    
    case 59:
    {
    float posicao59_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao59_y=0;
    
    if ((x - posicao59_x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < int(x - posicao59_x); i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((y - posicao59_y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < int(y - posicao59_y); i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = x - posicao59_x;                            // Atualiza a posição em x e y
    y = y - posicao59_y;
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
  }
  
}
