#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3);


void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);

  pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 digitalWrite(7,1);
 digitalWrite(8,1);
}

void loop() {
  if (BTSerial.available()) {
    char Mensaje = BTSerial.read();
  if (Mensaje == 'a') {
    digitalWrite(7,0);
    digitalWrite(8,1);}
    
  if (Mensaje == 'b') {
    digitalWrite(7,1);
    digitalWrite(8,1);}
      
  if (Mensaje== 'c'){
    digitalWrite(8,0);
    digitalWrite(7,1);}
      }
  }
