int count = 0;

void setup(){
  pinMode(2, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Print encoder");
  attachInterrupt(digitalPinToInterrupt(2),ADD, RISING);
}
void loop(){
  Serial.println(count);
  delay(500);
  Serial.begin(9600);
}
void ADD(){
  count++;
}
