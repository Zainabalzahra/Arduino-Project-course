void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Simple calcultion using fuctions");

int first_num = 5;
int second_num;
second_num = 6;

Serial.println(do_a_calc(first_num, second_num));//Calls the do_a_calc function and prints out the result
}

void loop() {
  // put your main code here, to run repeatedly:

}

int do_a_calc(int num_1, int num_2){
  return num_1 + num_2; //does the addition and returns the result to the caller
}
