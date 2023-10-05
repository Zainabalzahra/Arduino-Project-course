int d = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(4, OUTPUT);
pinMode(2, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  
 for (int a =0; a < 256; a++)
 {
  analogWrite(7, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(7, a);
  delay(d);
 }
 delay(200);
 
 for (int a =0; a < 256; a++)
 {
  analogWrite(6, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(6, a);
  delay(d);
 }
 delay(200);



 for (int a =0; a < 256; a++)
 {
  analogWrite(4, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(4, a);
  delay(d);
 }
 delay(200);

 for (int a =0; a < 256; a++)
 {
  analogWrite(2, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(2,  a);
  delay(d);
 }
 delay(200);

 

 
}
