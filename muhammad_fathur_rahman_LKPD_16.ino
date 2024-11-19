//fathur
const int buttonPin = 26;
const int buzzerPin = 27;
void setup() {
 pinMode(buzzerPin, OUTPUT);
 pinMode(buttonPing, INPUT);
}

void loop() {
 int buttonState = digitalRead(buttonPin);
 if(buttonState == HIGH){
  digitalWrite(buzzerPin,HIGH);
 }else{
  digitalWrite (buzzerPin, LOW);
 }
}
