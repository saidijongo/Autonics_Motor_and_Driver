#define CW 5   
#define CCW 6  

void rotateCW(int angleDegrees) {
  int steps = angleDegrees / 0.72;
  
  for (int i = 0; i < steps; i++) {
    digitalWrite(CW, HIGH);
    delayMicroseconds(3600); 
    digitalWrite(CW, LOW);
    delayMicroseconds(3600);
  }
}

void rotateCCW(int angleDegrees) {
  int steps = angleDegrees / 0.72;
  
  for (int i = 0; i < steps; i++) {
    digitalWrite(CCW, HIGH);
    delayMicroseconds(3600);
    digitalWrite(CCW, LOW);
    delayMicroseconds(3600);
  }
}

void setup() {
  pinMode(CW, OUTPUT);
  pinMode(CCW, OUTPUT);
}

void loop() {
  rotateCW(90); // Rotate clockwise by 90 degrees
  delay(2000);

  rotateCCW(90); // Rotate counterclockwise by 90 degrees
  delay(2000);
}
