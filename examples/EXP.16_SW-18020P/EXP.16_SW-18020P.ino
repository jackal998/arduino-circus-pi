int shake = 7;
int count = 0;
void setup() {
  pinMode(shake,INPUT);
  Serial.begin(9600);

}

void loop() {
  if(digitalRead(shake)==true) {
    count +=1;
  }
  Serial.println(count);
}
