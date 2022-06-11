
const int pin = A3;
float voltage2 = 0;
const int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,INPUT);
  Serial.begin(9600);
}

void loop() {
  int readValue = analogRead(pin);
  voltage2 = (5./1023.)*readValue;
  Serial.println(voltage2);
  delay(delayTime);
}
