void setup() {
  // Initialize the serial communication
  Serial.begin(9600);
  // pinMode(2, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    // Read the incoming command
    char command = Serial.read();

    // Turn on/off the LEDs based on the command
    if (command == '1') {
      Serial.println("Match Detected");
      // digitalWrite(2, HIGH);
    }else if (command == '2') {
      Serial.println("Match Not Detected");
    }else if(command == '3') {
      Serial.println("Face Not Detected");
    }
  }
  // digitalWrite(2, LOW);
  // delay(1000);
}
