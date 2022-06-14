#include <M5Stack.h>
const int In_0 = 23;
void setup() {
// put your setup code here, to run once:
pinMode(In_0,OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
digitalWrite(In_0, LOW);
delay(1000);
digitalWrite(In_0, HIGH);
delay(1000);
}
