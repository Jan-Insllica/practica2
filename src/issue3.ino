int ldrPin = 34;
int ledPin = 25;

int valorLDR = 0;
int llindar = 1000; // Ajusta segons la llum real

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  valorLDR = analogRead(ldrPin);

  Serial.print("Valor LDR: ");
  Serial.println(valorLDR);

  if (valorLDR > llindar) {
    // Foscor → encendre LED
    digitalWrite(ledPin, HIGH);
    Serial.println("⚠️ PERILL: Massa foscor!");
  } else {
    // Llum → apagar LED
    digitalWrite(ledPin, LOW);
    Serial.println("✅ Llum correcta");
  }

  delay(2000);
}
