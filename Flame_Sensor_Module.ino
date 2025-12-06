int FlameSensor = 3;
int led = 4;
int buzzer = 5;
void setup() {

pinMode(FlameSensor,INPUT);
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
}
void loop() {

int sutSensor = digitalRead(FlameSensor);
 
 if(sutSensor == 0){
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
 }
 else {
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(2000);
  }}
