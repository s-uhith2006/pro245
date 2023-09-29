const int potentiometerPin = A0;
const int buzzerPin = 26;        
int potValue = 0;                

void setup() {
  pinMode(buzzerPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potentiometerPin);
  
  int frequency = map(potValue, 0, 4095, 100, 1000);
  
  tone(buzzerPin, frequency);
  
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);
  Serial.print("Buzzer Frequency: ");
  Serial.println(frequency);

  delay(100);
  noTone(buzzerPin);
}
