const int led_jaune = 7;

  void setup()
{
    pinMode(led_jaune, OUTPUT);
}

  void loop()
{
  digitalWrite(led_jaune, 1);
  delay(400);
  digitalWrite(led_jaune, 0);
  delay(400);
}
