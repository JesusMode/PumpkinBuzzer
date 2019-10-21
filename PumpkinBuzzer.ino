int trigPin = 9;
int echoPin = 8;
int buzzPin = 2;
int xtone;

void setup() {
  pinMode(buzzPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  pingSensor();
  buzz();
}
