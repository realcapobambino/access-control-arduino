#include <Servo.h>

Servo myservo; // create servo object to control a servo

int pos = 0; // variable pos to store the servo's position

// RGB LED
int Led_Red = 6;
int Led_Green = 5;
int Led_Blue = 4;


// Buzzer
int buzzer = 7;

void setup()
{
    // Output pin initialization

    // Servo
    myservo.attach(8);

    // RGB LED
    pinMode(Led_Red, OUTPUT);
    pinMode(Led_Green, OUTPUT);
    pinMode(Led_Blue, OUTPUT);

    //  Buzzer
    pinMode(buzzer, OUTPUT);
}
void loop()
{
    myservo.write(90);

    digitalWrite(Led_Red, HIGH);  // LED will be switched ON
    digitalWrite(Led_Green, LOW); // LED will be switched OFF
    digitalWrite(Led_Blue, LOW);  // LED will be switched OFF

    tone(buzzer, 1000);

    delay(3000); // Waitmode for 3 seconds

    myservo.write(0);

    digitalWrite(Led_Red, LOW);    // LED will be switched OFF
    digitalWrite(Led_Green, HIGH); // LED wwill be switched ON
    digitalWrite(Led_Blue, LOW);   // LED will be switched OFF

    noTone(buzzer);

    delay(3000); // Waitmode for another 3 seconds in which the LEDs will be shifted.

    myservo.write(90);

    digitalWrite(Led_Red, LOW);   // LED will be switched OFF
    digitalWrite(Led_Green, LOW); // LED will be switched OFF
    digitalWrite(Led_Blue, HIGH); // LED will be switched ON

    tone(buzzer, 500);

    delay(3000); // Waitmode for another 3 seconds in which the LEDs will be shifted.

    myservo.write(0);

    digitalWrite(Led_Red, HIGH);   // LED will be switched ON
    digitalWrite(Led_Green, LOW); // LED will be switched ON
    digitalWrite(Led_Blue, HIGH);  // LED will be switched ON

    noTone(buzzer);
    delay(500);
}