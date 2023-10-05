
int my_integers[5] = {1, // in index and i 0
                      2, //in index and i 1
                      3, //in index and i 2
                      4, //in index and i 3
                      5};//in index and i 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  while(!Serial)
  {
    ;
  }

  Serial.println("Your array numbers:");

  for (int index = 0; index < 5; index++) 
  {
    Serial.print("Index: ");
    Serial.print(index);
    Serial.print(" Contains value ");
    Serial.println(my_integers[index]);
  }

  Serial.println();
  Serial.println("lets do some calculations: ");
  

  for (int i = 0; i < 4; i++){

    Serial.print(my_integers[i]);
    Serial.print(" + ");
    Serial.print(my_integers[i +1]);
    Serial.print(" = ");
    Serial.println(my_integers[i] + my_integers[i+1]); //actual calculation
  }

  Serial.println();
  Serial.println("Lets do some calculations and store the results:");

  for(int i = 0 ; i < 4 ; i++ )
  {
    Serial.print(my_integers[i]);
    Serial.print(" + ");
    Serial.print(my_integers[i+1]);
    Serial.print(" = ");
    int sum = my_integers[i] + my_integers[i+1]; //storing the calc of my intergers at index so starting from 0 (element 1) and + myIntegers[i+1] so value 0(elemnt 1) with 1 = 1 + 2
    my_integers[i] = sum; // assignment of thjis new numbers to an index position in the array
    Serial.print(my_integers[i]);
    Serial.print(" => Index ");
    Serial.print(i);
    Serial.print(" now conatins value ");
    Serial.println(my_integers[i]);   
    
    
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
