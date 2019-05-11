#include <Servo.h>
int val;
int pos=0,x;
Servo myPointer;
void setup() {
Serial.begin(9600);
myPointer.attach(9);
myPointer.write(0);
}
void loop() {
if(Serial.available())
{
val=Serial.read();
Serial.println(val);
if(val==48)
{
for(pos=15;pos<=170;pos=pos+1)
{
myPointer.write(pos);
delay(5);
}
}
if(val==49)
{
for(pos=170;pos>=15;pos=pos-1)
{
myPointer.write(pos);
delay(5);
}

}
}
}
