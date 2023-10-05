#define PIEZO 3
int del = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(PIEZO, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(PIEZO, 128);
delay(del);
analogWrite(PIEZO, LOW);
delay(del);
}
