/*
 * https://www.cnblogs.com/Isotropic/archive/2004/01/13/5758989.html
 */
// pulse width delayMicroseconds(2125) centered
// > 2125: left
// < 2125: right
int center = 2125;
int pulse_width = 0;
int degree = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
    

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(2,LOW);
  degree = 0;
  pulse_width = 8 * degree;
  delay(30);
  digitalWrite(2,HIGH);
  delayMicroseconds(center+100);
  digitalWrite(2,LOW);
  
}
