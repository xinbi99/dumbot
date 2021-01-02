/*
5 left motor forward
6 right motor forward
9 left motor reverse
10 right motor reverse
 */
int ledPin = 13;
int a5; // trigger pin
int left_forward = 5;
int right_forward = 6;
int left_reverse = 9;
int right_reverse = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);           //  setup serial
  pinMode(A4, OUTPUT); // trigger
  pinMode(A5, INPUT); // echo
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
//  digitalWrite(A4, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(A4, LOW);
//  a5 = analogRead(A5);
//  Serial.println("A5 =");
//  Serial.println(a5);

  long duration, distance;
  digitalWrite(A4, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(A4, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(A4, LOW);
  duration = pulseIn(A5, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 4) {  // This is where the LED On/Off happens
    digitalWrite(ledPin,HIGH); // When the Red condition is met, the Green LED should turn off
}
  else {
    digitalWrite(ledPin,LOW);
  }
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
  
 
}
