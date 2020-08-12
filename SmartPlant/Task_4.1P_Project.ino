void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);                                         // Set LED pin as output
  Serial.begin(9600);                                                   // Open serial port, set the baud rate as 9600 bps
}

void loop()
{
  int SoilMoisture = analogRead(0);                                     // Define soil moisture integer
  int SoilMoistureLoSP = 300;                                           // Define alarm Setpoint

  if( SoilMoisture <= SoilMoistureLoSP)                                 // check if soil moisture is low
  {
    digitalWrite(LED_BUILTIN, HIGH);                                    // If low turn the LED on
    Serial.println("Soil Moisture Low Alarm");                          // Print text

  }
  else digitalWrite(LED_BUILTIN, LOW);                                  // Otherwise turn the LED off
  
  Serial.println(SoilMoisture);                                         // Print the data
  delay(1000);                                                          // Wait 1 second to take another sample
}
