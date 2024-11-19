//fathur
//xi tAV 3
const int buttonPin1 = 26;
const int buttonPin2 = 26;
const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 14;
void setup() {
 pinMode(redPin,OUTPUT);
 pinMode(yellowPin,OUTPUT);
 pinMode(greenPin,OUTPUT);
 pinMode(buttonPin1,INPUT);
 pinMode(buttonPin1,INPUT);
 digitalWrite(redPin,HIGH);
  digitalWrite(yellowPin,LOW);
 digitalWrite(greenPin,LOW);
}
void loop() {
 int buttonState1 = digitalRead(buttonPin1);
 int buttonState2 = digitalRead(buttonPin1);
 if (buttonState1 == HIGH ){
   digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(500);
  digitalWrite(yellowPin,LOW);
  digitalWrite(greenPin,HIGH);}
  else if (buttonState2 == HIGH){
 digitalWrite(greenPin,LOW);
  digitalWrite(yellowPin,HIGH);
  delay(500);
   digitalWrite(yellowPin,LOW);
  digitalWrite(redPin,HIGH);
 }else{}}
