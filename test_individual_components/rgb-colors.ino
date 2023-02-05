int Led_Red = 6;
int Led_Green = 5;
int Led_Blue = 4;

int val;
void setup () {
 // Output pin initialization for the LEDs
 pinMode (Led_Red, OUTPUT);
 pinMode (Led_Green, OUTPUT);
 pinMode (Led_Blue, OUTPUT);
}
void loop () {
 // In this for-loop, the 3 LEDs will get different PWM-values
 // Via mixing the brightness of the different LEDs, you will get different colors.
 for (val = 255; val> 0; val--)
 {
 analogWrite (Led_Blue, val);
 analogWrite (Led_Green, 255-val);
 analogWrite (Led_Red, 128-val);
 delay (1);
 }
 // You will go backwards through the color range in this second for loop.
 for (val = 0; val <255; val++)
 {
 analogWrite (Led_Blue, val);
 analogWrite (Led_Green, 255-val);
 analogWrite (Led_Red, 128-val);
 delay (1);
 }
}