#define MOTOR_D1_PIN 7
#define MOTOR_D2_PIN 8
#define MOTOR_PWM_PIN 6
String num;
int speed;
void setup(){
  pinMode(MOTOR_D1_PIN,OUTPUT);
  pinMode(MOTOR_D2_PIN,OUTPUT);
  pinMode(MOTOR_PWM_PIN,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()>0){
  num = Serial.readString();
  speed = num.toInt();
  Serial.println(speed)
}
  if(speed>=0 && speed<=255){
    motor();
  }
}
void motor(){
  digitalWrite(MOTOR_D1_PIN,HIGH);
  digitalWrite(MOTOR_D2_PIN,LOW);
  digitalWrite(MOTOR_PWM_PIN,speed);
  delay(1000);
  digitalWrite(MOTOR_D1_PIN,LOW);
  digitalWrite(MOTOR_D2_PIN,LOW);
  delay(1000);
}
