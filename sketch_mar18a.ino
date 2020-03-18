#define button 3 
#define led 8
int count = 0;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(button),ISR_Callback, RISING);
  Seial.begin(9600);
}

void loop() {
  if (count == 1){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }
  else if(count == 2){
    digitalWrite(led, HIGH);
    delay(2000);
    digitalWrite(led, LOW);
    delay(2000);
  }
  else if(count == 3){
    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(led, LOW);
    delay(3000);
  }

}
void ISR_Callback(){
  count = count + 1;
}
