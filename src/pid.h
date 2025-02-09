#ifndef __PID_H__
#define __PID_H__

#include <Arduino.h>

int16_t speed_PI(uint id,int motor_list, float target_rpm, float rpm, float now_current, float dt);
int16_t position_PPI(uint id, int motor_list, float target_pos, float angle, float first_angle, float rpm, float now_current, float dt);

#endif