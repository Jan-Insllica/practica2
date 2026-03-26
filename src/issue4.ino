int ldrPin = 34;
int ledPin = 25;

int valorLDR = 0;
int llindar = 2500;

bool controlAutomatic = true;

void mostrarMenu() {
  Serial.println("----- MENU -----");
  Serial.println("1 - Llegir valor LDR");
  Serial.println("2 - Estat del sistema");
  Serial.println("3 - Encendre LED manual");
  Serial.println("4 - Apagar LED manual");
  Serial.println("m - Mostrar menu");
  Serial.println("----------------");
}

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

  mostrarMenu();
}

void loop() {
  // Lectura contínua
  valorLDR = analogRead(ldrPin);

  // Control automàtic
  if (controlAutomatic) {
    if (valorLDR > llindar) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
  }

  // Llegir comandes del Serial
  if (Serial.available()) {
    char opcio = Serial.read();

    switch (opcio) {
      case '1':
        Serial.print("Valor LDR: ");
        Serial.println(valorLDR);
        break;

      case '2':
        if (valorLDR > llindar) {
          Serial.println("⚠️ PERILL: Foscor");
        } else {
          Serial.println("✅ Llum correcta");
        }
        break;

      case '3':
        controlAutomatic = false;
        digitalWrite(ledPin, HIGH);
        Serial.println("LED encès manualment");
        break;

      case '4':
        controlAutomatic = false;
        digitalWrite(ledPin, LOW);
        Serial.println("LED apagat manualment");
        break;

      case 'm':
        mostrarMenu();
        break;
    }
  }

  delay(200);
}
