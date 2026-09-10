void setup()
{
  Serial.begin(9600);

  pinMode(8, OUTPUT);   // Green
  pinMode(9, OUTPUT);   // Yellow
  pinMode(10, OUTPUT);  // Red
}

void loop()
{
  int phRaw = analogRead(A0);
  int turbidity = analogRead(A1);
  int tds = analogRead(A2);

  float voltage = phRaw * (5.0 / 1023.0);
  float phValue = 14 - (3.5 * voltage) - 3.8;

  Serial.print("pH: ");
  Serial.print(phValue);

  Serial.print("  Turbidity: ");
  Serial.print(turbidity);

  Serial.print("  TDS: ");
  Serial.println(tds);

  // GOOD WATER
  if(phValue >= 6.5 && phValue <= 8.5 &&
     turbidity > 380 &&
     tds <= 100)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);

    Serial.println("GREEN");
  }

  // MEDIUM WATER
  else if(phValue >= 6.0 && phValue <= 9.0 &&
          turbidity > 300 && turbidity <= 380 &&
          tds <= 300)
  {
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);

    Serial.println("YELLOW");
  }

  // BAD WATER
  else
  {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);

    Serial.println("RED");
  }

  delay(1000);
}
