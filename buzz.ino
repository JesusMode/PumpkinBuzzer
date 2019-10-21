int buzzDis;
void buzz() {

  if (buzzDis > 100) {
    if (xtone > 200) {
      xtone -= 100;
    }

    pinMode(buzzPin, INPUT);
    digitalWrite(buzzPin, LOW);
    Serial.print("  I should be off now   : ");
    Serial.println(buzzDis);

  } else if (buzzDis >= 50 ) {
    pinMode(buzzPin, OUTPUT);
    xtone = 200;
    tone(buzzPin, xtone);
  } else if (buzzDis < 50) {
    pinMode(buzzPin, OUTPUT);
    xtone += buzzDis + 75;
    tone(buzzPin, xtone);
    if (xtone > 5000) {
      xtone = 200;
    }
    Serial.println("Tone");
    Serial.println(xtone);
  }

}
