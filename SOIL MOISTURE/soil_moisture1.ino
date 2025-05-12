// isravel
//
int soil = 0;

void setup()
{
  pinMode(A3, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  soil = analogRead(A3);
  Serial.println(soil);
  if (soil < 100) {
    digitalWrite(13, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(11, LOW);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(8, LOW);
    digitalWrite(11, HIGH);
  }
  delay(50); // if you want improve simulation performance Delay 
}