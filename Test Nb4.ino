int data;

void setup()
{
  Serial.begin(9600);
  Serial.print("C'est parti!");
}

void loop()
{
  data=Serial.read();

  switch(data)
  {
      case '1' : Serial.println("un"); break;
      case '2' : Serial.println("deux");
      case '3' : Serial.println("trois");
      case '4' : Serial.println("quatre"); break;
  }

}
