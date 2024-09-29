const int Trig = 8;
const int Echo = 9;
long duration, inches, cm;

void setup() {
  
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);

}

void loop() {

  digitalWrite(Trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(Trig, LOW);
  duration = pulseIn(Echo, HIGH);

  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();

   delay(1000);
  
}

long microsecondsToInches(long microseconds) {


  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {


  return microseconds / 29 / 2;
}
