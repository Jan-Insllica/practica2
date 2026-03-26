const int pinLM35 = 35;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int adc = analogRead(pinLM35);

  // Convertir a voltatge
  float voltatge = adc * (3.3 / 4095.0);

  // Convertir a temperatura segons LM35
  float temperatura = voltatge * 100.0;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  delay(2000);
}
