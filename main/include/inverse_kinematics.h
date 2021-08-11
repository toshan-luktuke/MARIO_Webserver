#ifndef INVERSE_KINEMATICS_H
#define INVERSE_KINEMATICS_H

#include<math.h>


typedef struct invK_coords
{
    double x;
    double y;
    double z;
} xyz_coords;

double Round(double n);
double* applyInverseKinematics(double,double,double);
double degrees(double rad);


#endif