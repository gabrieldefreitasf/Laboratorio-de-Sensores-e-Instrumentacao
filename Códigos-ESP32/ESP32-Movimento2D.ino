// Controle de Motores de Passo Baseado em Driver a4988 em Experimento RPS - Movimento 2D
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Gabriel de Freitas
// OBS: 0.0065 mm/ passo (Obtido experimentalmente para x)
// OBS2: 0.006 mm/passo (Obtido experimentalmente para y)
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
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
}

void loop() {

  switch(celula){
    case 120:
    {
    float posicao120_x = -5*esp;
    float posicao120_y = 5*esp;

    if ((posicao120_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao120_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao120_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao120_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao120_x;                            // Atualiza a posição em x e y
    y = posicao120_y;
    }
    break;
    case 119:
    {
    float posicao119_x = -4*esp;
    float posicao119_y = 5*esp;

    if ((posicao119_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao119_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao119_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao119_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao119_x;                            // Atualiza a posição em x e y
    y = posicao119_y;
    }
    break;
    case 118:
    {
    float posicao118_x = -3*esp;
    float posicao118_y = 5*esp;

    if ((posicao118_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao118_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao118_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao118_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao118_x;                            // Atualiza a posição em x e y
    y = posicao118_y;
    }
    break;
    case 117:
    {
    float posicao117_x = -2*esp;
    float posicao117_y = 5*esp;

    if ((posicao117_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao117_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao117_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao117_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao117_x;                            // Atualiza a posição em x e y
    y = posicao117_y;
    }
    break;
    case 116:
    {
    float posicao116_x = -esp;
    float posicao116_y = 5*esp;

    if ((posicao116_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao116_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao116_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao116_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao116_x;                            // Atualiza a posição em x e y
    y = posicao116_y;
    }
    break;
    case 115:
    {
    float posicao115_x = 0;
    float posicao115_y = 5*esp;

    if ((posicao115_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao115_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao115_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao115_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao115_x;                            // Atualiza a posição em x e y
    y = posicao115_y;
    }
    break;
    case 114:
    {
    float posicao114_x = esp;
    float posicao114_y = 5*esp;

    if ((posicao114_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao114_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao114_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao114_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao114_x;                            // Atualiza a posição em x e y
    y = posicao114_y;
    }
    break;
    case 113:
    {
    float posicao113_x = 2*esp;
    float posicao113_y = 5*esp;

    if ((posicao113_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao113_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao113_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao113_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao113_x;                            // Atualiza a posição em x e y
    y = posicao113_y;
    }
    break;
    case 112:
    {
    float posicao112_x = 3*esp;
    float posicao112_y = 5*esp;

    if ((posicao112_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao112_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao112_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao112_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao112_x;                            // Atualiza a posição em x e y
    y = posicao112_y;
    }
    break;
    case 111:
    {
    float posicao111_x = 4*esp;
    float posicao111_y = 5*esp;

    if ((posicao111_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao111_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao111_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao111_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao111_x;                            // Atualiza a posição em x e y
    y = posicao111_y;
    }
    break;
    case 110:
    {
    float posicao110_x = 5*esp;
    float posicao110_y = 5*esp;

    if ((posicao110_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao110_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao110_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao110_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao110_x;                            // Atualiza a posição em x e y
    y = posicao110_y;
    }
    break;
    case 109:
    {
    float posicao109_x = -5*esp;
    float posicao109_y = 4*esp;

    if ((posicao109_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao109_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao109_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao109_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao109_x;                            // Atualiza a posição em x e y
    y = posicao109_y;
    }
    break;
    case 108:
    {
    float posicao108_x = -4*esp;
    float posicao108_y = 4*esp;

    if ((posicao108_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao108_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao108_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao108_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao108_x;                            // Atualiza a posição em x e y
    y = posicao108_y;
    }
    break;
    case 107:
    {
    float posicao107_x = -3*esp;
    float posicao107_y = 4*esp;

    if ((posicao107_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao107_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao107_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao107_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao107_x;                            // Atualiza a posição em x e y
    y = posicao107_y;
    }
    break;
    case 106:
    {
    float posicao106_x = -2*esp;
    float posicao106_y = 4*esp;

    if ((posicao106_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao106_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao106_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao106_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao106_x;                            // Atualiza a posição em x e y
    y = posicao106_y;
    }
    break;
    case 105:
    {
    float posicao105_x = -esp;
    float posicao105_y = 4*esp;

    if ((posicao105_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao105_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao105_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao105_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao105_x;                            // Atualiza a posição em x e y
    y = posicao105_y;
    }
    break;
    case 104:
    {
    float posicao104_x = 0;
    float posicao104_y = 4*esp;

    if ((posicao104_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao104_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao104_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao104_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao104_x;                            // Atualiza a posição em x e y
    y = posicao104_y;
    }
    break;
    case 103:
    {
    float posicao103_x = esp;
    float posicao103_y = 4*esp;

    if ((posicao103_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao103_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao103_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao103_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao103_x;                            // Atualiza a posição em x e y
    y = posicao103_y;
    }
    break;
    case 102:
    {
    float posicao102_x = 2*esp;
    float posicao102_y = 4*esp;

    if ((posicao102_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao102_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao102_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao102_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao102_x;                            // Atualiza a posição em x e y
    y = posicao102_y;
    }
    break;
    case 101:
    {
    float posicao101_x = 3*esp;
    float posicao101_y = 4*esp;

    if ((posicao101_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao101_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao101_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao101_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao101_x;                            // Atualiza a posição em x e y
    y = posicao101_y;
    }
    break;
    case 100:
    {
    float posicao100_x = 4*esp;
    float posicao100_y = 4*esp;

    if ((posicao100_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao100_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao100_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao100_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao100_x;                            // Atualiza a posição em x e y
    y = posicao100_y;
    }
    break;
    case 99:
    {
    float posicao99_x = 5*esp;
    float posicao99_y = 4*esp;

    if ((posicao99_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao99_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao99_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao99_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao99_x;                            // Atualiza a posição em x e y
    y = posicao99_y;
    }
    break;
    case 98:
    {
    float posicao98_x = -5*esp;
    float posicao98_y = 3*esp;

    if ((posicao98_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao98_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao98_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao98_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao98_x;                            // Atualiza a posição em x e y
    y = posicao98_y;
    }
    break;
    case 97:
    {
    float posicao97_x = -4*esp;
    float posicao97_y = 3*esp;

    if ((posicao97_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao97_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao97_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao97_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao97_x;                            // Atualiza a posição em x e y
    y = posicao97_y;
    }
    break;
    case 96:
    {
    float posicao96_x = -3*esp;
    float posicao96_y = 3*esp;

    if ((posicao96_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao96_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao96_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao96_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao96_x;                            // Atualiza a posição em x e y
    y = posicao96_y;
    }
    break;
    case 95:
    {
    float posicao95_x = -2*esp;
    float posicao95_y = 3*esp;

    if ((posicao95_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao95_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao95_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao95_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao95_x;                            // Atualiza a posição em x e y
    y = posicao95_y;
    }
    break;
    case 94:
    {
    float posicao94_x = -esp;
    float posicao94_y = 3*esp;

    if ((posicao94_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao94_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao94_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao94_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao94_x;                            // Atualiza a posição em x e y
    y = posicao94_y;
    }
    break;
    case 93:
    {
    float posicao93_x = 0;
    float posicao93_y = 3*esp;

    if ((posicao93_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao93_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao93_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao93_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao93_x;                            // Atualiza a posição em x e y
    y = posicao93_y;
    }
    break;
    case 92:
    {
    float posicao92_x = esp;
    float posicao92_y = 3*esp;

    if ((posicao92_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao92_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao92_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao92_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao92_x;                            // Atualiza a posição em x e y
    y = posicao92_y;
    }
    break;
    case 91:
    {
    float posicao91_x = 2*esp;
    float posicao91_y = 3*esp;

    if ((posicao91_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao91_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao91_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao91_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao91_x;                            // Atualiza a posição em x e y
    y = posicao91_y;
    }
    break;
    case 90:
    {
    float posicao90_x = 3*esp;
    float posicao90_y = 3*esp;

    if ((posicao90_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao90_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao90_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao90_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao90_x;                            // Atualiza a posição em x e y
    y = posicao90_y;
    }
    break;
    case 89:
    {
    float posicao89_x = 4*esp;
    float posicao89_y = 3*esp;

    if ((posicao89_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao89_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao89_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao89_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao89_x;                            // Atualiza a posição em x e y
    y = posicao89_y;
    }
    break;
    case 88:
    {
    float posicao88_x = 5*esp;
    float posicao88_y = 3*esp;

    if ((posicao88_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao88_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao88_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao88_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao88_x;                            // Atualiza a posição em x e y
    y = posicao88_y;
    }
    break;
    case 87:
    {
    float posicao87_x = -5*esp;
    float posicao87_y = 2*esp;

    if ((posicao87_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao87_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao87_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao87_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao87_x;                            // Atualiza a posição em x e y
    y = posicao87_y;
    }
    break;
    case 86:
    {
    float posicao86_x = -4*esp;
    float posicao86_y = 2*esp;

    if ((posicao86_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao86_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao86_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao86_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao86_x;                            // Atualiza a posição em x e y
    y = posicao86_y;
    }
    break;
    case 85:
    {
    float posicao85_x = -3*esp;
    float posicao85_y = 2*esp;

    if ((posicao85_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao85_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao85_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao85_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao85_x;                            // Atualiza a posição em x e y
    y = posicao85_y;
    }
    break;
    case 84:
    {
    float posicao84_x = -2*esp;
    float posicao84_y = 2*esp;

    if ((posicao84_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao84_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao84_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao84_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao84_x;                            // Atualiza a posição em x e y
    y = posicao84_y;
    }
    break;
    case 83:
    {
    float posicao83_x = -esp;
    float posicao83_y = 2*esp;

    if ((posicao83_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao83_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao83_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao83_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao83_x;                            // Atualiza a posição em x e y
    y = posicao83_y;
    }
    break;
    case 82:
    {
    float posicao82_x = 0;
    float posicao82_y = 2*esp;

    if ((posicao82_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao82_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao82_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao82_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao82_x;                            // Atualiza a posição em x e y
    y = posicao82_y;
    }
    break;
    case 81:
    {
    float posicao81_x = esp;
    float posicao81_y = 2*esp;

    if ((posicao81_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao81_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao81_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao81_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao81_x;                            // Atualiza a posição em x e y
    y = posicao81_y;
    }
    break;
    case 80:
    {
    float posicao80_x = 2*esp;
    float posicao80_y = 2*esp;

    if ((posicao80_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao80_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao80_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao80_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao80_x;                            // Atualiza a posição em x e y
    y = posicao80_y;
    }
    break;
    case 79:
    {
    float posicao79_x = 3*esp;
    float posicao79_y = 2*esp;

    if ((posicao79_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao79_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao79_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao79_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao79_x;                            // Atualiza a posição em x e y
    y = posicao79_y;
    }
    break;
    case 78:
    {
    float posicao78_x = 4*esp;
    float posicao78_y = 2*esp;

    if ((posicao78_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao78_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao78_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao78_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao78_x;                            // Atualiza a posição em x e y
    y = posicao78_y;
    }
    break;
    case 77:
    {
    float posicao77_x = 5*esp;
    float posicao77_y = 2*esp;

    if ((posicao77_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao77_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao77_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao77_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao77_x;                            // Atualiza a posição em x e y
    y = posicao77_y;
    }
    break;
    case 76:
    {
    float posicao76_x = -5*esp;
    float posicao76_y = esp;

    if ((posicao76_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao76_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao76_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao76_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao76_x;                            // Atualiza a posição em x e y
    y = posicao76_y;
    }
    break;
    case 75:
    {
    float posicao75_x = -4*esp;
    float posicao75_y =esp;

    if ((posicao75_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao75_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao75_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao75_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao75_x;                            // Atualiza a posição em x e y
    y = posicao75_y;
    }
    break;
    case 74:
    {
    float posicao74_x = -3*esp;
    float posicao74_y = esp;

    if ((posicao74_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao74_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao74_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao74_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao74_x;                            // Atualiza a posição em x e y
    y = posicao74_y;
    }
    break;
    case 73:
    {
    float posicao73_x = -2*esp;
    float posicao73_y = esp;

    if ((posicao73_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao73_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao73_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao73_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao73_x;                            // Atualiza a posição em x e y
    y = posicao73_y;
    }
    break;
    case 72:
    {
    float posicao72_x = -esp;
    float posicao72_y = esp;

    if ((posicao72_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao72_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao72_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao72_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao72_x;                            // Atualiza a posição em x e y
    y = posicao72_y;
    }
    break;
    case 71:
    {
    float posicao71_x = 0;
    float posicao71_y = esp;

    if ((posicao71_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao71_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao71_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao71_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao71_x;                            // Atualiza a posição em x e y
    y = posicao71_y;
    }
    break;
    case 70:
    {
    float posicao70_x = esp;
    float posicao70_y = esp;

    if ((posicao70_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao70_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao70_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao70_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao70_x;                            // Atualiza a posição em x e y
    y = posicao70_y;
    }
    break;
    case 69:
    {
    float posicao69_x = 2*esp;
    float posicao69_y = esp;

    if ((posicao69_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao69_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao69_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao69_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao69_x;                            // Atualiza a posição em x e y
    y = posicao69_y;
    }
    break;
    case 68:
    {
    float posicao68_x = 3*esp;
    float posicao68_y = esp;

    if ((posicao68_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao68_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao68_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao68_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao68_x;                            // Atualiza a posição em x e y
    y = posicao68_y;
    }
    break;
    case 67:
    {
    float posicao67_x = 4*esp;
    float posicao67_y = esp;

    if ((posicao67_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao67_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao67_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao67_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao67_x;                            // Atualiza a posição em x e y
    y = posicao67_y;
    }
    break;
    case 66:
    {
    float posicao66_x = 5*esp;
    float posicao66_y = esp;

    if ((posicao66_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao66_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao66_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao66_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao66_x;                            // Atualiza a posição em x e y
    y = posicao66_y;
    }
    break;
    case 65:
    {
    float posicao65_x = -5*esp;
    float posicao65_y = 0;

    if ((posicao65_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao65_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao65_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao65_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao65_x;                            // Atualiza a posição em x e y
    y = posicao65_y;
    }
    break;
    case 64:
    {
    float posicao64_x = -4*esp;
    float posicao64_y = 0;

    if ((posicao64_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao64_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao64_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao64_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao64_x;                            // Atualiza a posição em x e y
    y = posicao64_y;
    }
    break;
    case 63:
    {
    float posicao63_x = -3*esp;
    float posicao63_y = 0;

    if ((posicao63_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao63_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao63_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao63_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao63_x;                            // Atualiza a posição em x e y
    y = posicao63_y;
    }
    break;
    case 62:
    {
    float posicao62_x = -2*esp;
    float posicao62_y = 0;

    if ((posicao62_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao62_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao62_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao62_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao62_x;                            // Atualiza a posição em x e y
    y = posicao62_y;
    }
    break;
    case 61:
    {
    float posicao61_x = -esp;
    float posicao61_y=0;

    if ((posicao61_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao61_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao61_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao61_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao61_x;                            // Atualiza a posição em x e y
    y = posicao61_y;
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
    
    for(int i=0; i < abs(posicao60_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
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
    
    for(int i=0; i < abs(posicao60_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao60_x;                            // Atualiza a posição em x e y
    y = posicao60_y;
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
    
    for(int i=0; i < abs(posicao59_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
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
    
    for(int i=0; i < abs(posicao59_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao59_x;                            // Atualiza a posição em x e y
    y = posicao59_y;
    }
    break;
    case 58:
    {
    float posicao58_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao58_y=0;
    
    if ((posicao58_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao58_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao58_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao58_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao58_x;                            // Atualiza a posição em x e y
    y = posicao58_y;
    }
    break;
    case 57:
    {
    float posicao57_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao57_y=0;

    if ((posicao57_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao57_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao57_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao57_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao57_x;                            // Atualiza a posição em x e y
    y = posicao57_y;
    }
    break;
    case 56:
    {
    float posicao56_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao56_y=0;

    if ((posicao56_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao56_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao56_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao56_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao56_x;                            // Atualiza a posição em x e y
    y = posicao56_y;
    }
    break;
    case 55:
    {
    float posicao55_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao55_y=0;

    if ((posicao55_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao55_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao55_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao55_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao55_x;                            // Atualiza a posição em x e y
    y = posicao55_y;
    }
    break;
    case 54:
    {
    float posicao54_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao54_y= -esp;

    if ((posicao54_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao54_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao54_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao54_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao54_x;                            // Atualiza a posição em x e y
    y = posicao54_y;
    }
    break;
    case 53:
    {
    float posicao53_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao53_y= -esp;

    if ((posicao53_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao53_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao53_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao53_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao53_x;                            // Atualiza a posição em x e y
    y = posicao53_y;
    }
    break;
    case 52:
    {
    float posicao52_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao52_y= -esp;

    if ((posicao52_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao52_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao52_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao52_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao52_x;                            // Atualiza a posição em x e y
    y = posicao52_y;
    }
    break;
    case 51:
    {
    float posicao51_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao51_y= -esp;

    if ((posicao51_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao51_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao51_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao51_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao51_x;                            // Atualiza a posição em x e y
    y = posicao51_y;
    }
    break;
    case 50:
    {
    float posicao50_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao50_y= -esp;

    if ((posicao50_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao50_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao50_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao50_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao50_x;                            // Atualiza a posição em x e y
    y = posicao50_y;
    }
    break;
    case 49:
    {
    float posicao49_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao49_y= -esp;

    if ((posicao49_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao49_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao49_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao49_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao49_x;                            // Atualiza a posição em x e y
    y = posicao49_y;
    }
    break;
    case 48:
    {
    float posicao48_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao48_y= -esp;

    if ((posicao48_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao48_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao48_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao48_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao48_x;                            // Atualiza a posição em x e y
    y = posicao48_y;
    }
    break;
    case 47:
    {
    float posicao47_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao47_y= -esp;

    if ((posicao47_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao47_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao47_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao47_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao47_x;                            // Atualiza a posição em x e y
    y = posicao47_y;
    }
    break;
    case 46:
    {
    float posicao46_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao46_y= -esp;

    if ((posicao46_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao46_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao46_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao46_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao46_x;                            // Atualiza a posição em x e y
    y = posicao46_y;
    }
    break;
    case 45:
    {
    float posicao45_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao45_y= -esp;

    if ((posicao45_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao45_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao45_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao45_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao45_x;                            // Atualiza a posição em x e y
    y = posicao45_y;
    }
    break;
    case 44:
    {
    float posicao44_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao44_y= -esp;

    if ((posicao44_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao44_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao44_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao44_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao44_x;                            // Atualiza a posição em x e y
    y = posicao44_y;
    }
    break;
    case 43:
    {
    float posicao43_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao43_y= -2*esp;

    if ((posicao43_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao43_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao43_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao43_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao43_x;                            // Atualiza a posição em x e y
    y = posicao43_y;
    }
    break;
    case 42:
    {
    float posicao42_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao42_y= -2*esp;

    if ((posicao42_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao42_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao42_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao42_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao42_x;                            // Atualiza a posição em x e y
    y = posicao42_y;
    }
    break;
    case 41:
    {
    float posicao41_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao41_y= -2*esp;

    if ((posicao41_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao41_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao41_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao41_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao41_x;                            // Atualiza a posição em x e y
    y = posicao41_y;
    }
    break;
    case 40:
    {
    float posicao40_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao40_y= -2*esp;

    if ((posicao40_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao40_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao40_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao40_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao40_x;                            // Atualiza a posição em x e y
    y = posicao40_y;
    }
    break;
    case 39:
    {
    float posicao39_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao39_y= -2*esp;

    if ((posicao39_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao39_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao39_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao39_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao39_x;                            // Atualiza a posição em x e y
    y = posicao39_y;
    }
    break;
    case 38:
    {
    float posicao38_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao38_y= -2*esp;

    if ((posicao38_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao38_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao38_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao38_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao38_x;                            // Atualiza a posição em x e y
    y = posicao38_y;
    }
    break;
    case 37:
    {
    float posicao37_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao37_y= -2*esp;

    if ((posicao37_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao37_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao37_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao37_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao37_x;                            // Atualiza a posição em x e y
    y = posicao37_y;
    }
    break;
    case 36:
    {
    float posicao36_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao36_y= -2*esp;

    if ((posicao36_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao36_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao36_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao36_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao36_x;                            // Atualiza a posição em x e y
    y = posicao36_y;
    }
    break;
    case 35:
    {
    float posicao35_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao35_y= -2*esp;

    if ((posicao35_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao35_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao35_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao35_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao35_x;                            // Atualiza a posição em x e y
    y = posicao35_y;
    }
    break;
    case 34:
    {
    float posicao34_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao34_y= -2*esp;

    if ((posicao34_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao34_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao34_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao34_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao34_x;                            // Atualiza a posição em x e y
    y = posicao34_y;
    }
    break;
    case 33:
    {
    float posicao33_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao33_y= -2*esp;

    if ((posicao33_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao33_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao33_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao33_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao33_x;                            // Atualiza a posição em x e y
    y = posicao33_y;
    }
    break;
    case 32:
    {
    float posicao32_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao32_y= -3*esp;

    if ((posicao32_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao32_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao32_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao32_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao32_x;                            // Atualiza a posição em x e y
    y = posicao32_y;
    }
    break;
    case 31:
    {
    float posicao31_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao31_y= -3*esp;

    if ((posicao31_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao31_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao31_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao31_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao31_x;                            // Atualiza a posição em x e y
    y = posicao31_y;
    }
    break;
    case 30:
    {
    float posicao30_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao30_y= -3*esp;

    if ((posicao30_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao30_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao30_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao30_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao30_x;                            // Atualiza a posição em x e y
    y = posicao30_y;
    }
    break;
    case 29:
    {
    float posicao29_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao29_y= -3*esp;

    if ((posicao29_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao29_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao29_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao29_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao29_x;                            // Atualiza a posição em x e y
    y = posicao29_y;
    }
    break;
    case 28:
    {
    float posicao28_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao28_y= -3*esp;

    if ((posicao28_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao28_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao28_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao28_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao28_x;                            // Atualiza a posição em x e y
    y = posicao28_y;
    }
    break;
    case 27:
    {
    float posicao27_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao27_y= -3*esp;

    if ((posicao27_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao27_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao27_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao27_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao27_x;                            // Atualiza a posição em x e y
    y = posicao27_y;
    }
    break;
    case 26:
    {
    float posicao26_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao26_y= -3*esp;

    if ((posicao26_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao26_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao26_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao26_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao26_x;                            // Atualiza a posição em x e y
    y = posicao26_y;
    }
    break;
    case 25:
    {
    float posicao25_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao25_y= -3*esp;

    if ((posicao25_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao25_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao25_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao25_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao25_x;                            // Atualiza a posição em x e y
    y = posicao25_y;
    }
    break;
    case 24:
    {
    float posicao24_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao24_y= -3*esp;

    if ((posicao24_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao24_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao24_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao24_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao24_x;                            // Atualiza a posição em x e y
    y = posicao24_y;
    }
    break;
    case 23:
    {
    float posicao23_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao23_y= -3*esp;

    if ((posicao23_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao23_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao23_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao23_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao23_x;                            // Atualiza a posição em x e y
    y = posicao23_y;
    }
    break;
    case 22:
    {
    float posicao22_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao22_y= -3*esp;

    if ((posicao22_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao22_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao22_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao22_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao22_x;                            // Atualiza a posição em x e y
    y = posicao22_y;
    }
    break;
    case 21:
    {
    float posicao21_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao21_y= -4*esp;

    if ((posicao21_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao21_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao21_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao21_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao21_x;                            // Atualiza a posição em x e y
    y = posicao21_y;
    }
    break;
    case 20:
    {
    float posicao20_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao20_y= -4*esp;

    if ((posicao20_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao20_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao20_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao20_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao20_x;                            // Atualiza a posição em x e y
    y = posicao20_y;
    }
    break;
    case 19:
    {
    float posicao19_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao19_y= -4*esp;

    if ((posicao19_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao19_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao19_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao19_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao19_x;                            // Atualiza a posição em x e y
    y = posicao19_y;
    }
    break;
    case 18:
    {
    float posicao18_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao18_y= -4*esp;

    if ((posicao18_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao18_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao18_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao18_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao18_x;                            // Atualiza a posição em x e y
    y = posicao18_y;
    }
    break;
    case 17:
    {
    float posicao17_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao17_y= -4*esp;

    if ((posicao17_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao17_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao17_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao17_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao17_x;                            // Atualiza a posição em x e y
    y = posicao17_y;
    }
    break;
    case 16:
    {
    float posicao16_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao16_y= -4*esp;

    if ((posicao16_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao16_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao16_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao16_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao16_x;                            // Atualiza a posição em x e y
    y = posicao16_y;
    }
    break;
    case 15:
    {
    float posicao15_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao15_y= -4*esp;

    if ((posicao15_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao15_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao15_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao15_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao15_x;                            // Atualiza a posição em x e y
    y = posicao15_y;
    }
    break;
    case 14:
    {
    float posicao14_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao14_y= -4*esp;

    if ((posicao14_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao14_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao14_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao14_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao14_x;                            // Atualiza a posição em x e y
    y = posicao14_y;
    }
    break;
    case 13:
    {
    float posicao13_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao13_y= -4*esp;

    if ((posicao13_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao13_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao13_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao13_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao13_x;                            // Atualiza a posição em x e y
    y = posicao13_y;
    }
    break;
    case 12:
    {
    float posicao12_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao12_y= -4*esp;

    if ((posicao12_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao12_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao12_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao12_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao12_x;                            // Atualiza a posição em x e y
    y = posicao12_y;
    }
    break;
    case 11:
    {
    float posicao11_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao11_y= -4*esp;

    if ((posicao11_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao11_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao11_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao11_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao11_x;                            // Atualiza a posição em x e y
    y = posicao11_y;
    }
    break;
    case 10:
    {
    float posicao10_x= -5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao10_y= -5*esp;

    if ((posicao10_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao10_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao10_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao10_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao10_x;                            // Atualiza a posição em x e y
    y = posicao10_y;
    }
    break;
    case 9:
    {
    float posicao9_x= -4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao9_y= -5*esp;

    if ((posicao9_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao9_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao9_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao9_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao9_x;                            // Atualiza a posição em x e y
    y = posicao9_y;
    }
    break;
    case 8:
    {
    float posicao8_x= -3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao8_y= -5*esp;

    if ((posicao8_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao8_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao8_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao8_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao8_x;                            // Atualiza a posição em x e y
    y = posicao8_y;
    }
    break;
    case 7:
    {
    float posicao7_x= -2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao7_y= -5*esp;

    if ((posicao7_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao7_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao7_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao7_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao7_x;                            // Atualiza a posição em x e y
    y = posicao7_y;
    }
    break;
    case 6:
    {
    float posicao6_x= -esp;                         // Define a posição em x e y para a célula em questão
    float posicao6_y= -5*esp;

    if ((posicao6_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao6_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao6_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao6_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao6_x;                            // Atualiza a posição em x e y
    y = posicao6_y;
    }
    break;
    case 5:
    {
    float posicao5_x= 0;                         // Define a posição em x e y para a célula em questão
    float posicao5_y= -5*esp;

    if ((posicao5_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao5_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao5_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao5_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao5_x;                            // Atualiza a posição em x e y
    y = posicao5_y;
    }
    break;
    case 4:
    {
    float posicao4_x= esp;                         // Define a posição em x e y para a célula em questão
    float posicao4_y= -5*esp;

    if ((posicao4_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao4_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao4_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao4_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao4_x;                            // Atualiza a posição em x e y
    y = posicao4_y;
    }
    break;
    case 3:
    {
    float posicao3_x= 2*esp;                         // Define a posição em x e y para a célula em questão
    float posicao3_y= -5*esp;

    if ((posicao3_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao3_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao3_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao3_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao3_x;                            // Atualiza a posição em x e y
    y = posicao3_y;
    }
    break;
    case 2:
    {
    float posicao2_x= 3*esp;                         // Define a posição em x e y para a célula em questão
    float posicao2_y= -5*esp;

    if ((posicao2_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao2_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao2_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao2_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao2_x;                            // Atualiza a posição em x e y
    y = posicao2_y;
    }
    break;
    case 1:
    {
    float posicao1_x= 4*esp;                         // Define a posição em x e y para a célula em questão
    float posicao1_y= -5*esp;

    if ((posicao1_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao1_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao1_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao1_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao1_x;                            // Atualiza a posição em x e y
    y = posicao1_y;
    }
    break;
    case 0:
    {
    float posicao0_x= 5*esp;                         // Define a posição em x e y para a célula em questão
    float posicao0_y= -5*esp;

    if ((posicao0_x - x) < 0){                     // Verifica se o movimento é no sentido +x ou -x (CHECAR NA MONTAGEM EXPERIMENTAL)
      digitalWrite(dirPinx, HIGH);
    }
    else{
      digitalWrite(dirPinx, LOW);
    }
    
    for(int i=0; i < abs(posicao0_x - x)/0,011; i++){    // Move, em x, o necessário para chegar na posição pré definida da célula
      digitalWrite(stepPinx, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPinx, LOW);
      delayMicroseconds(500);
    }
    
    if ((posicao0_y - y) < 0){                     // Repete o processo para y
      digitalWrite(dirPiny, HIGH);
    }
    else{
      digitalWrite(dirPiny, LOW);
    }
    
    for(int i=0; i < abs(posicao0_y - y)/0,011; i++){
      digitalWrite(stepPiny, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPiny, LOW);
      delayMicroseconds(500);
    }
    x = posicao0_x;                            // Atualiza a posição em x e y
    y = posicao0_y;
    }
    break;
  }
  
}

