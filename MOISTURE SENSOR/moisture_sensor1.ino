

void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}
int value=0;
void loop()
{
  value=analogRead(A5);
  int values=(value/539.00)*100;
  Serial.println(values);//percentage of moisture
  if(values>50)
  digitalWrite(8, HIGH);
  else
  digitalWrite(8, LOW);
  delay(500);
}
