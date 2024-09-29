int sensorVal = 0;
int tem = 0;
int sensor = A0;


void setup() {
  
  Serial.begin(9600);
  pinMode(sensor,INPUT);

}

void loop() {
   
    sensorVal = analogRead(sensor);
    tem = (125*sensorVal)>>8;
    Serial.print("Temperature: ");
    Serial.print(tem);          
    Serial.println("℃");    
    delay(1000);

}
