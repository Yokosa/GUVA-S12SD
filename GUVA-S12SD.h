#ifndef __GUVA_H__
#define __GUVA_H__

#include <Arduino.h>

class GUVA_S12SD{
    public:
        GUVA_S12SD( int pin );
        int getUVIntensity(); 
    private:
        int pin__;
};

#endif