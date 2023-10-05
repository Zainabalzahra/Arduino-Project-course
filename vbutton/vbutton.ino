int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(7,  OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(2);


  if (buttonState == HIGH){
    Serial.println("The state is HIGH");
    digitalWrite(7, HIGH);
  }
  else
  {
    Serial.println("The state is LOW");
    digitalWrite(7, LOW);
  }
}
