const int forwardPin = 7;
const int backwardPin = 8;


void setForwards() {
  digitalWrite(forwardPin, HIGH);
  digitalWrite(backwardPin, LOW);
}

void setBackwards() {
  digitalWrite(backwardPin, HIGH);
  digitalWrite(forwardPin, LOW);
  
}

void setup() {
  // set the digital pin as output:
  pinMode(forwardPin, OUTPUT);
    pinMode(backwardPin, OUTPUT);
}

void loop()
{
  delay(50);
  setForwards();
  delay(50);
  setBackwards();
  
}


