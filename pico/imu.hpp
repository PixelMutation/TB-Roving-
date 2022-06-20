#ifndef IMU_H
#define IMU_H

#include "mpu6050.h"

// Takes raw IMU values, converts them to be more useful

class IMU {
private:
  
public:
  IMU();
  MPU6050 mpu6050;
};


#endif