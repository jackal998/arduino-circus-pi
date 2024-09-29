int Red = 8;
int Green = 9;
int Blue = 10;

void setup() {
  
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);

}

void loop() {

  digitalWrite(Red, LOW);  
  digitalWrite(Green, LOW);  
  digitalWrite(Blue, LOW);  
  delay(1000); 

  digitalWrite(Red, HIGH);  
  digitalWrite(Green, LOW);  
  digitalWrite(Blue, LOW);  
  delay(1000); 

  digitalWrite(Red, LOW);  
  digitalWrite(Green, HIGH);  
  digitalWrite(Blue, LOW);  
  delay(1000); 

  digitalWrite(Red, LOW);  
  digitalWrite(Green, LOW);  
  digitalWrite(Blue, HIGH);  
  delay(1000); 

  

}
