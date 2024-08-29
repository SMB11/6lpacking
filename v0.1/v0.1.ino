const int sensorPin1 = ; // Digital pin connected to the first sensor
const int sensorPin2 = 3; // Digital pin connected to the second sensor
const int conveyorPin = 4; // Digital pin connected to the conveyor motor

const unsigned long runTime = 5000; // Conveyor run time in milliseconds (5 seconds)

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(conveyorPin, OUTPUT);
  digitalWrite(conveyorPin, LOW);
  Serial.begin(9600);
}

void loop() {
  // Read the sensor values
  int sensorValue1 = digitalRead(sensorPin1);
  int sensorValue2 = digitalRead(sensorPin2);

  // Check if both sensors are high
  if (sensorValue1 == HIGH && sensorValue2 == HIGH) {
    // Turn on the conveyor
    digitalWrite(conveyorPin, HIGH);
    Serial.println("Conveyor ON");

    // Wait for the specified run time
    delay(runTime);

    // Turn off the conveyor
    digitalWrite(conveyorPin, LOW);
    Serial.println("Conveyor OFF");

   
}
