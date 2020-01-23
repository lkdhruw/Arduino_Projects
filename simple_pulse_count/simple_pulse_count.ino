unsigned int count;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), countfn, CHANGE);
}

void countfn()
{
  count++;
  Serial.print("Pulse Count ");
  Serial.println(count);
}

void loop() {
  // put your main code here, to run repeatedly:

}
