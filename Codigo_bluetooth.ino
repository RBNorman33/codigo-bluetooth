#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3);
int led_amarillo_1=4;
int led_amarillo_2=11;
int led_rojo_1=5;
int led_rojo_2=6;


void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);

  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  digitalWrite(7,1);
  digitalWrite(8,1);
  pinMode(led_amarillo_1,OUTPUT);
  pinMode(led_amarillo_2,OUTPUT);
  pinMode(led_rojo_1,OUTPUT);
  pinMode(led_rojo_2,OUTPUT);}

void loop() {
  if (BTSerial.available()) {
    char Mensaje = BTSerial.read();
    
    
  if (Mensaje == 'a') {
    digitalWrite(7,0);
    digitalWrite(8,1);}
    parar_apagado();
  if (Mensaje == 'b'){//Parar. 
    digitalWrite(7,1);
    digitalWrite(8,1);
 parar();}
      
  if (Mensaje== 'c'){
    digitalWrite(8,0);
    digitalWrite(7,1);}
   // emergencia();
   //parar_apagado();
   }
   else{
   parar_apagado(); }
}
  void emergencia(){
    digitalWrite(led_amarillo_1,HIGH);
    digitalWrite(led_amarillo_2,HIGH);
    delay(1000);
    digitalWrite(led_amarillo_1,LOW);
    digitalWrite(led_amarillo_2,LOW);
    delay(1000);}
    void parar (){
      digitalWrite(led_rojo_1,HIGH);
      digitalWrite(led_rojo_2,HIGH);}
      void parar_apagado(){
       digitalWrite(led_rojo_1,LOW);
      digitalWrite(led_rojo_2,LOW); }
