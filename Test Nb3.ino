int led =3;
int data;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  Serial.println("C'est parti!");
}

void loop() {
  data=Serial.read();

  if (data=='1')
  {
     digitalWrite(led, 1);
     Serial.println("LED allumée");
  }

  if (data=='0')
  {
    digitalWrite(led, 0);
    Serial.println("LED éteinte");
  }
}
