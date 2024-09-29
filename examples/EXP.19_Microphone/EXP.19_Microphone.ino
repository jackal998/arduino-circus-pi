int Analog = A0;
int Digital = 3;

int AVal = 0;
int DVal = 0;

void setup() {

  Serial.begin(9600);
  pinMode(Analog, INPUT);
  pinMode(Digital, INPUT);

}

void loop() {

  AVal = analogRead(Analog);
  AVal = map(AVal, 0, 1023, 600, 0);
  Serial.print("<");
  Serial.print(AVal);

  DVal = digitalRead(Digital);
  if(DVal = HIGH){
    digitalWrite(LED_BUILTIN, HIGH); 
  }
  else{
    digitalWrite(LED_BUILTIN, LOW); 
  }
  
  delay(1000);

}
