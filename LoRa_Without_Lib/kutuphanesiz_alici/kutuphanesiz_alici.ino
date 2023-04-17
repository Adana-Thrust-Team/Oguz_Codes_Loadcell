#include <SoftwareSerial.h>

SoftwareSerial lora(2 , 3);

char gelen;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lora.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
while(lora.available()) {
  gelen= lora.read();
  Serial.print(gelen);
 // Serial.println(" ");
  }
delay(250);
}
