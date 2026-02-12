#define TRIG 7
#define ECHO 6
#define BUZZER 8

#define GREEN_LED 5
#define YELLOW_LED 4
#define RED_LED 3

long duration;
int distance;

unsigned long lastBeepTime = 0;

void setup() {

  Serial.begin(9600);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  pinMode(BUZZER, OUTPUT);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {

  // Trigger ultrasonic
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH, 30000);

  if(duration == 0){
    Serial.println("No Object");
    return;
  }

  distance = duration * 0.034 / 2;
  Serial.println(distance);

  // Reset LEDs
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);

  // -------- NEW REDUCED RANGE LOGIC --------

  if(distance > 40){
    noTone(BUZZER);
  }

  else if(distance > 25){   // Safe zone
    digitalWrite(GREEN_LED, HIGH);
    noTone(BUZZER);
  }

  else if(distance > 10){   // Warning zone
    digitalWrite(YELLOW_LED, HIGH);

    if(millis() - lastBeepTime > 600){
      tone(BUZZER, 800, 100);
      lastBeepTime = millis();
    }
  }

  else if(distance > 5){    // Danger zone
    digitalWrite(RED_LED, HIGH);

    if(millis() - lastBeepTime > 250){
      tone(BUZZER, 1500, 120);
      lastBeepTime = millis();
    }
  }

  else{                     // Immediate stop
    digitalWrite(RED_LED, HIGH);
    tone(BUZZER, 2000);     // Continuous
  }

  delay(50);
}