int button_pressed = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  switch (button_pressed){
    case 1:
    Serial.println("Button 1 is pressed");
    break;
    case 2:
    Serial.println("Button 2 is pressed");
    break;
    default:
    Serial.println("I dont know which button was pressed...");
    break;
    
    
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
