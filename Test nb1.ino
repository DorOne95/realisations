const int bouton = 2;
const int ledRouge = 7;

int etatBouton;

void setup() {
  // put your setup code here, to run once:
  pinMode(bouton,INPUT);
  pinMode(ledRouge,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  etatBouton = digitalRead(bouton);
  if(etatBouton == HIGH)
    {
      digitalWrite(ledRouge,HIGH);
    }
  else
    {
      digitalWrite(ledRouge,LOW);
    }

}
