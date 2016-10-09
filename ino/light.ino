
int led1 = D0;

int led2 = D7;
int led_red=D3;
int led_blue=D2;


void setup() {
    pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
    pinMode(led2, OUTPUT);
      pinMode(led2, OUTPUT);
  Particle.function("state", setLightState);
  Particle.function("color", setLightColor);
}


int setLightColor(String color) {
  Serial.println("color: " + color);

  if(color == "violet") {
    digitalWrite(led2, HIGH);
  }
  else if(color == "green") {
    digitalWrite(led1, HIGH);
  }
    else if(color=="blue"){
       digitalWrite(led_blue, HIGH);
    }
    else if(color=="red"){
       digitalWrite(led_red, HIGH);
    }
    else if(color=="lights"){
        digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

    }
    else if(color=="off")
    {
       digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led_red, LOW);
  digitalWrite(led_blue, LOW);
    }
    else
    {
        digitalWrite(led1, LOW);
    }
}

int setLightState(String state) {
  Serial.println("state: " + state);

    if(state == "violet") {
    digitalWrite(led2, LOW);
  }
  else if(state == "green") {
    digitalWrite(led1, LOW);
  }
    else if(state=="blue"){
       digitalWrite(led_blue, LOW);
    }
    else if(state=="red"){
       digitalWrite(led_red, LOW);
    }
    else if(state=="lights"){
        digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
    }
  else {
      digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led_red, LOW);
  digitalWrite(led_blue, LOW);
  }
}
