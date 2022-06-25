#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/* ----------------------------- Wheel Settings ----------------------------- */


#define WHEEL_DIAMETER
#define MAX_SPEED
#define MAX_ACCEL

#define LEFT_WHEELS_ADDR
#define RIGHT_WHEELS_ADDR


/* --------------------------- Worm Motor Settings -------------------------- */

#define WORM_MOTOR_ADDR

/* ----------------------------- Scoop Settings ----------------------------- */

#define SCOOP_REDUCTION
#define SCOOP_MAX_SPEED
#define SCOOP_MAX_ACCEL
#define SCOOP_MAX_ANGLE
#define SCOOP_MIN_ANGLE

/* ----------------------------- Brush Settings ----------------------------- */

#define BRUSH_REDUCTION
#define BRUSH_MAX_SPEED
#define BRUSH_MAX_ACCEL

/* ----------------------------- Motor Settings ----------------------------- */

#define MOTOR_SDA
#define MOTOR_SCL
#define MOTOR_I2C_CLOCK

/* ------------------------------ IMU Settings ------------------------------ */

#define IMU_SDA
#define IMU_SCL
#define IMU_I2C_CLOCK

/* ---------------------------- Encoder Settings ---------------------------- */

#define NUM_ENCODERS 6
#define ENCODER_MOSI    
#define ENCODER_MISO    
#define ENCODER_SCLK    
#define ENCODER_CS      



#endif