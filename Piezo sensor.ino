const int sensorPin=0;
const int ledPin= 13;
const int threshold= 100;
void setup()
{
pinMode(ledPin, OUTPUT);
}
void loop()
{
int val= analogRead(sensorPin);
if (val >= threshold)
{
digitalWrite(ledPin, HIGH);
delay(5000);
digitalWrite(ledPin, LOW);
}
else
digitalWrite(ledPin, LOW);
}
