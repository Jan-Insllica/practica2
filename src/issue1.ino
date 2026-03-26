#include <dummy.h>

int ldrPin = 34;   // Pin ADC (GPIO34)
int valorLDR = 0;

void setup() {
  Serial.begin(115200); // ESP32 usa mejor 115200
}

void loop() {
  valorLDR = analogRead(ldrPin); // Lee valor (0 - 4095)

  Serial.print("Valor LDR: ");
  Serial.println(valorLDR);

  delay(2000); // 2 segundos
}
