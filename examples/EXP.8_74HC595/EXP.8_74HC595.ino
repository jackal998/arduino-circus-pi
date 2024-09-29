int Lock = 2;
int DatePin = 3;
int clockPin = 4;


void setup() {
  
  pinMode(Lock,OUTPUT);
  pinMode(DatePin,OUTPUT);
  pinMode(clockPin,OUTPUT);


}

void loop() {

 for (int i=0; i<=255; i++){
  digitalWrite(Lock,LOW);
  shiftOut(DatePin,clockPin,LSBFIRST,i);
  digitalWrite(Lock,HIGH);
  delay(200);
  
 }

}
