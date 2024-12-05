#include <Digital_Light_ISL29035.h>
#include <Digital_Light_TSL2561.h>

int sensorpin = 2;
int ledpin = 15;
int sensorValue = 0;
int suppl = 23 ;

void setup() 
{
  pinMode(ledpin, OUTPUT);
  pinMode(suppl,OUTPUT);
  Serial.begin(115200);
  digitalWrite(suppl,HIGH);

}

void loop() {
 sensorValue = analogRead(sensorpin);
 Serial.println(sensorValue);
 if(sensorValue<1500)
 {
    digitalWrite(ledpin, HIGH);
 }
 else
 {
    digitalWrite(ledpin, LOW);
 }
 delay(1000);
}


