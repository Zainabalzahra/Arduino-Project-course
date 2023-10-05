#define LED 2
#define BUTTON 3
void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(BUTTON) == HIGH)
{
  digitalWrite(LED, HIGH);

} 

else {
  digitalWrite(LED, LOW);
}

}
