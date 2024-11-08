#define MQ2pin 16
int SensorValue;
void setup(){
  Serial.begin(9600);
  Serial.println("Memanaskan MQ2");
  delay(20000);
}
void loop(){
  SensorValue = digitalRead(MQ2pin);
  Serial.print("Digital Output: ");
  Serial.print(SensorValue);
  if (SensorValue){
    Serial.println(" | Smoke/Gas: Tidak Terdeteksi");
  } else {
    Serial.println(" | Smoke/Gas: Terdeteksi!");
  }
  delay(2000);
}
