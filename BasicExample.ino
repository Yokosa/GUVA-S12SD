#include <Arduino.h>
#include <GUVA-S12SD.h>

GUVA_S12SD sensor(3);

void setup(){
    Serial.begin(115200);    
}

void loop(){
    Serial.print(" UV : ");
    Serial.println(sensor.getUVIntensity());
    delay(1000);
}