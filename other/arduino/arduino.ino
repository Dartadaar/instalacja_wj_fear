int sensorValue; //czujka pin 12

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(12, INPUT_PULLUP);
}

// the loop routine runs over and over again forever:
void loop() {

if (digitalRead(12) == 0)  {sensorValue = 0;}
else
{sensorValue = 1;}
  Serial.println(sensorValue);
  delay(5);  // delay in between reads for stability
}