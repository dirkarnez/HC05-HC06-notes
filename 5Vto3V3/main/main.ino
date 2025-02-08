/*
  Analog input reads an analog input on analog in 0, prints the value out.
  created 24 March 2006
  by Tom Igoe
  */

int analogValue = 0;    // variable to hold the analog value

void setup() {
  // open the serial port at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog input on pin 0:
  analogValue = analogRead(0);
  float voltage = 5.0 * (analogValue / 1023.0);
  // print it out in many formats:
  Serial.print(analogValue);       // print as an ASCII-encoded decimal
  Serial.print(", DEC: "); 
  Serial.print(analogValue, DEC);  // print as an ASCII-encoded decimal
  Serial.print(", HEX: "); 
  Serial.print(analogValue, HEX);  // print as an ASCII-encoded hexadecimal
  Serial.print(", OCT: "); 
  Serial.print(analogValue, OCT);  // print as an ASCII-encoded octal
  Serial.print(", BIN: "); 
  Serial.print(analogValue, BIN);  // print as an ASCII-encoded binary
  Serial.print(", voltage: "); 
  Serial.println(voltage);  // print as an ASCII-encoded binary
  // delay 10 milliseconds before the next reading:
  delay(10);
}