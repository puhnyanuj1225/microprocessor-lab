int count1 = 0;
int previous1 = 0;
int count2 = 0;
void setup(){
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),DIR1,RISING);
  attachInterrupt(digitalPinToInterrupt(3),DIR2,RISING);
  Serial.begin(9600);
}
void loop(){
  count1 = digitalRead(2);
  count2 = digitalRead(3);
  if(previous1 == 0 && count1 == 1){
    if(count2 == 1){
    serial.println("CTW");
    delay(500);
    }
    if(count2 == 0){
    serial.println("CW");
    delay(500);
    }
  }
    previous1 = count1;
}
