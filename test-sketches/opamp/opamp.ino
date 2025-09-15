/*
         
             ┬-- buchse <--   1 out |      | 4 out
GND R2 -> -> R1-------------> 1 in- |      | 4 out
               D pin <-- 1 in+ |      | 4 out
                 +12v <-- vcc+ |      | vcc-  --> GND  
          1 out |      | 4 out
          1 out |      | 4 out
          1 out |      | 4 out


*/


bool current = HIGH;
void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, !current);
  current = !current;
  delay(4000);
}
