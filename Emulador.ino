// Emulador de Reflectômetro (Dados Seriais)
// Laboratório de Sensores e Instrumentação - Grupo de Fotônica - UFPE
// Gabriel de Freitas
//---------------------------------------------------
void setup() {
  Serial.begin(115200);
}

void loop() {
  float theta = 45.0615 + random(-5,5);
  float r = 0.75 + random(-1,1);
  Serial.print(theta);
  Serial.print(";");
  Serial.println(r);
  delay(10000);
}
