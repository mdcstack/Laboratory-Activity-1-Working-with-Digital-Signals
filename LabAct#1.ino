// C++ code
//
const int bulb12 = 12;
const int bulb11 = 11;
const int bulb10 = 10;
const int bulb9 = 9;
const int bulb8 = 8;


void setup()
{
  pinMode(bulb12, OUTPUT);
  pinMode(bulb11, OUTPUT);
  pinMode(bulb10, OUTPUT);
  pinMode(bulb9, OUTPUT);
  pinMode(bulb8, OUTPUT);
}

void loop()
{
  digitalWrite(bulb12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(bulb8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
}