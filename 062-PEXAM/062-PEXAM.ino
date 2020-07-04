#include <Servo.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <SPI.h>
#include <Wire.h>

Adafruit_SSD1306 oled = Adafruit_SSD1306(128, 32, &Wire);
Servo myservo;        
int pos = 0;

void setup()
{
    oled.begin(0x3C);
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
    oled.clearDisplay();      
    oled.setCursor(36, 0);        
    oled.setTextColor(SSD1306_WHITE);         
    oled.setTextSize(1);                      
    oled.println("Hello MDT");
    oled.display();
    delay(1000);
    oled.clearDisplay();
    delay(650);
    tone(8,600,400);
}
void loop(){

}