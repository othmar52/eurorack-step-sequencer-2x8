#include <Arduino.h>
#include <U8glib.h>
#define MAX_CHARS_PER_LINE 12
// Wähle das passende Display für dein Setup
// Beispiel für ein SSD1306, 128x64 Pixel, I2C
U8GLIB_SSD1306_128X64 u8g2(U8G_I2C_OPT_NO_ACK); // All Boards without Reset of the Display

int counter = 0;
char counterString[MAX_CHARS_PER_LINE]; // Platz für bis zu 3 Ziffern + Null-Terminator

void setup() {
  u8g2.begin();
  pinMode(A0, INPUT);
  Serial.begin(115200);

}

const char *playModes[] = {
  "Forward",
  "Backward",
  "Ping Pong",
  "Pendulum",
  "Random",
  "Zig Zag"
};

void getPlayModeString(int potValue, char *buffer) {
  // Array-Länge berechnen: Gesamtgröße des Arrays / Größe eines Elements
  const uint8_t numPlayModes = sizeof(playModes) / sizeof(playModes[0]);
  
  // Wert auf den Index-Bereich mappen
  uint8_t segment = map(potValue, 0, 1024, 0, numPlayModes);
  
  // Schutz vor Index-Überlauf
  if (segment >= numPlayModes) {
    segment = numPlayModes - 1;
  }
  
  strcpy(buffer, playModes[segment]);
}

void loop() {
  counter = analogRead(A0);
  int c2 = map(counter, 0, 1024, 1, 100);

  // Rufe die Funktion auf und übergebe den Puffer
  getPlayModeString(counter, counterString);
  Serial.print("edfsedf ");
  Serial.println(counterString);

  // Display leeren und neuen Text zeichnen
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g_font_unifont); // Wähle eine passende Schriftart
    u8g2.drawStr(0, 20, "XX:");
    u8g2.drawStr(70, 20, counterString); // Zeigerposition anpassen
  } while (u8g2.nextPage());

  // Warten, bevor der Zähler wieder hochgezählt wird
  delay(1000);
}