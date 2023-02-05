
int buzzer = 7; //buzzer to arduino pin 9

void setup() {
  // put your setup code here, to run once:
  
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop() {
  // put your main code here, to run repeatedly:
    // tone(pin, frequency,duration)
  tone(buzzer, 1000);
  delay(500);
  noTone(buzzer);
  delay(500);
  tone(buzzer, 1000);
  delay(500);
  noTone(buzzer);
  delay(500);
  // tone(buzzer, 200);
  // delay(1000);
  // noTone(buzzer);
  // delay(1000);
  // tone(buzzer, 100);
  // delay(1000);
  // noTone(buzzer);
  // delay(1000);

}
