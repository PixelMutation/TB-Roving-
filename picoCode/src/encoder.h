#ifndef ENCODER_H
#define ENCODER_H

#include "configuration.hpp"

class encoder {
private:
    uint8_t bits; // how many bits there are in a reading
    uint16_t prevAngle;
    uint16_t prevSpeed;
    uint32_t prevTime;
    
    //virtual uint16_t readRaw(); // returns the raw value from the encoder
    uint16_t angle(); // raw angle shifted to 16 bits so all the same regardless of sensor model
    uint16_t angleChange(); // change in angle since last call
    uint16_t Speed(); // speed using change in angle and time
    uint16_t speedChange(); // change in speed since last call
    uint16_t accel(); // acceleration from change in speed and time
    
public:
    encoder(uint8_t numBits);

    uint16_t angle;
    uint16_t speed;
    uint16_t accel;

    uint16_t calcValues(uint16_t newAngle);
};

class AS5048a_SPI {
private:
    
    encoder encoders[NUM_ENCODERS]; // encoders are daisy chained. 
    
public:
    AS5048a_SPI();  
    void read();    
    
    encoder & addEncoder(uint8_t index); // other modules can add a new encoder, given the index

};


#endif