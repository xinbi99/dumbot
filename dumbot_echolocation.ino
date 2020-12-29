/*
 * 5 left motor forward
6 right motor forward
9 left motor reverse
10 right motor reverse
 */
 
int a5; // trigger pin
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);           //  setup serial
  pinMode(A4, OUTPUT);
  pinMode(A5, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(A4, HIGH);
  delayMicroseconds(10);
  digitalWrite(A4, LOW);
  a5 = analogRead(A5);
  Serial.println("A5 =");
  Serial.println(a5);

 
}
