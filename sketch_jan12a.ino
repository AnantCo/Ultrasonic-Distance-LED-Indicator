////linkdin/anantsharma31
const int trig = 12;
const int echo = 13;

const int LEDs[] = {8, 7, 6, 5, 4, 3, 2};

int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  for (int i = 0; i < 7; i++) {
    pinMode(LEDs[i], OUTPUT);
  }

  Serial.begin(9600);
}

void loop() {
  // Trigger the ultrasonic pulse
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Measure echo duration and calculate distance
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.0175;

  // Handle invalid readings
  if (distance < 2 || distance > 400) {
    distance = 0;
  }

  // Print distance to Serial Monitor
  Serial.println(distance);

  // Control LEDs
  for (int i = 0; i < 7; i++) {
    if (distance <= (i + 1) * 7) {
      digitalWrite(LEDs[i], HIGH);
    } else {
      digitalWrite(LEDs[i], LOW);
    }
  }

  delay(100); // Small delay for stability
}
