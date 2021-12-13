// Aquisição de Fotodetectores em Experimento RPS
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Gabriel de Freitas
//---------------------------------------------------
//
// Declaração de Entradas Analógicas
const int foto1 = 34;                                   // Fotodetector de referência é conectado ao GPIO 34 (Analog ADC1_CH6)
const int foto2 = 35;                                   // Fotodetector de saída é conectado ao GPIO 35 (Analog ADC1_CH7)
//Fim das entradas analógicas

void setup() 
{
  Serial.begin(115200);
  analogReadResolution(12);                             //Número de bits do ADC
  adcAttachPin(34);                                     //Selecionando pino 34 para ADC
  adcAttachPin(35);                                     //Selecionando pino 35 para ADC
  analogSetSamples(1);                                  //Selecionando número de amostras
  analogSetPinAttenuation(34,ADC_0db);                  //Seleciona atenuação de 0db no pino 34
  analogSetPinAttenuation(35,ADC_0db);                  //Seleciona atenuação de 0db no pino 35
  pinMode(34, INPUT);
  pinMode(35, INPUT);
}

void loop() 
{
  int ValorFoto1 = 0;                                   //Variável para fotodetector de referência (foto1)
  int ValorFoto2 = 0;                                   //Variável para fotodetector de saída (foto2)
  int N;                                                //Número de médias para obtenção de um ponto na curva de reflectância
  float R = 0;                                          //Valor médio de reflectância (Será plotado no gráfico)
  float soma = 0;                                       //Variável auxiliar para cáclculo de média
  float reflect[N];                                     //Vetor para armazenar valores adquiridos de reflectância(Tem que ter o tamanho de N)
  adcStart(34);                                         //Inicia ADC no pino 34
  adcStart(35);                                         //Inicia ADC no pino 35
  //----------------------------------
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
  Serial.println(R);
  delay(500);
}
