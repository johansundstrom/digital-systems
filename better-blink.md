int LED = 2;


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED, OUTPUT);
}


void loop()
{
  for (int i = 0; i < random(5); i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(30);
    digitalWrite(LED_BUILTIN, LOW);
    delay(30);
  }
  delay(random(5) * 1000);
}
