void setup()
{
  Serial.begin(9600);                                     // configure baud rate
}
void blinkFast()                                          // funtion to make LED blink quick
{
  digitalWrite(LED_BUILTIN, HIGH);                        // turn the LED on
  delay(500);                                             // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);                         // turn the LED off
  delay(1000);                                            // wait for a second
}
void blinkSlow()                                          // funtion to make LED blink slow
{
  digitalWrite(LED_BUILTIN, HIGH);                        // turn the LED on
  delay(1000);                                            // wait for a second
  digitalWrite(LED_BUILTIN, LOW);                         // turn the LED off
  delay(1000);                                            // wait for a second
}
void s()                                                  // funtion to morse code 's'
{
  blinkFast();                                            // call blinkFast function
  blinkFast();                                            // ^^
  blinkFast();                                            // ^^
}
void o()                                                  // funtion to morse code 'o'
{
  blinkSlow();                                            // call blinkSlow
  blinkSlow();                                            // ^^
  blinkSlow();                                            // ^^
}
void loop()
{
  s();                                                    //call s
  o();                                                    //call o
  s();                                                    //call s
}
