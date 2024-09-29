int Relay = 3;


void setup() {

 pinMode(Relay, OUTPUT);
 pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {

 digitalWrite(Relay, HIGH);
 digitalWrite(LED_BUILTIN, HIGH);
 delay(5000);

 digitalWrite(Relay, LOW);
 digitalWrite(LED_BUILTIN, LOW);  
 delay(5000);
 

}
