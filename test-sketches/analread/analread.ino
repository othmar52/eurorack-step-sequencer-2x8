byte analogPins[] = { A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11 };

uint8_t totalPots = 12;

void setup() {
  Serial.begin(115200);
  for (uint8_t i = 0; i < totalPots; i++) {
    pinMode(analogPins[i], INPUT);
  }
}

void loop() {

  for (uint8_t i = 0; i < totalPots; i++) {
    Serial.print("pot ");
    Serial.print(i);
    Serial.print(" wert ");
    Serial.println(analogRead(analogPins[i]));
    
  }
  Serial.println("---------");
  delay(300);
}