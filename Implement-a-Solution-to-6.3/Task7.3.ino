void setup()
{
  pinMode(3, INPUT);                                                // Declare pin 1 as input
  pinMode(4, INPUT);                                                // Declare pin 2 as input
  pinMode(5, INPUT);                                                // Declare pin 3 as input
  pinMode(LED_BUILTIN, OUTPUT);                                     // Set LED pin as output
  Serial.begin(9600);
}

void loop()
{
  int Motion1 = digitalRead(3);                                     // Define motion sensor 1
  int Motion2 = digitalRead(4);                                     // Define motion sensor 2
  int Motion3 = digitalRead(5);                                     // Define motion sensor 3
  int Alarmstate = Motion1 + Motion2 + Motion3;                     // Tie alarm state to sensors 

  if (Alarmstate > 1)                                               // Check if multiple sensors detect motion
  {
    digitalWrite(LED_BUILTIN, HIGH);                                // Set LED to on
    Serial.println("Motion Detected");                              // Print to serial monitor
    delay(500);                                                     // Wait for half second
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);                                 // Otherwise turn the LED off
    delay(500);                                                     // Wait for half second
  }
}
