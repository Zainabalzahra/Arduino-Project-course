char my_char[5] = {'a', 'b', 'c', 'd', 'e'};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  while(!Serial){
    ;
  }

  Seiral.println("Your arry char: ");
  for (int i = 0; i<5; i++){
    Serial.print("Index ");
    Seiral.print(i);
    Serial.print(my_char[i]);
    Serial.print("  , ASCII decimal ");
    Serial.println(my_char[i], DEC)
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
