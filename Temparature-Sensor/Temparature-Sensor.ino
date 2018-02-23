int temp = A0;
void setup() {
  Serial.begin(9600);
  pinMode(temp, INPUT);
}

void loop() {
  float value = analogRead(temp);
  float milVoltage = (5 * 1000 * value ) / 1024;
  float degree = milVoltage / 10; // as 10 mv == 1 degree celcius
  Serial.print("Temperature : ");
  Serial.print(degree);

}
