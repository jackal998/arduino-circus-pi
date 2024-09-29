int Val = 0;
int LSR = A1;

void setup() {
  
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {

  Val = analogRead(LSR);
  if(Val > 100){
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("HIGH");
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("LOW");
  }
   
}
