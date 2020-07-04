#include <Servo.h>
Servo myservo;        
int pos = 0;

void setup()
{
    tone(8,300,500);   
    Serial.begin(9600);
    Serial.println("Hello MDT");
    myservo.attach(9);  
    for(pos = 0; pos < 180; pos +=1) 
    {
        myservo.write(pos); 
        delay(15);
    }
    for(pos = 180; pos>=1; pos -=1) 
    {
        myservo.write(pos);
        delay(15);
    }
      Serial.println("Servo : " + String(pos) + " degrees");
      delay(900);
}
void loop(){

}