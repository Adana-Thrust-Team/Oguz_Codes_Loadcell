#define lora Serial1

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lora.begin(9600);


}

void loop() {

sendmsg(0,18,17);
//Serial.println(a);

delay(1500);
}

void sendmsg(byte addl, byte addh, byte chn){
  uint8_t a[] = "kaan";
  lora.write(addl);
  lora.write(addh);
  lora.write(chn);
  lora.println("kaan");
  
  
  }
