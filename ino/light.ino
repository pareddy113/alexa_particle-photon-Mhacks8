// IMPORTANT: Set pixel PIN, COUNT, and TYPE
// Supported pixel types: WS2812, WS2812B, WS2812B2, WS2811, TM1803, TM1829, SK6812RGBW

int led1 = D0; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7;



void setup() {
    pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Particle.function("state", setLightState);
  Particle.function("color", setLightColor);
}

int setLightState(String state) {
  Serial.println("state: " + state);
}

int setLightColor(String color) {
  Serial.println("color: " + color);

  if(color == "violet") {
    digitalWrite(led2, HIGH);
  }
  else if(color == "green") {
    digitalWrite(led1, HIGH);
  }
  else {
      digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  }
}
