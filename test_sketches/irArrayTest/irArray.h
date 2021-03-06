#ifndef IR_ARRAY_H_
#define IR_ARRAY_H_
#include "config.h"

class irArray {
    private:
        int pitch_;
        int pins_[NUM_SENSORS];
        int numSensors;
        float calib_from_vals[CALIB_ARRAY_SIZE];


    public:
        
        //constructor and functions
        irArray::irArray(int pins[], int pitch);
        int irArray::sensorDistance(int sensorNum);
        float irArray::interpolate(float irVal[]);
        float* irArray::read();
        void irArray::calibrate();
        float* irArray::get_calib();

};

#endif
