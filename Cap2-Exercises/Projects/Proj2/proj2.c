/*Write a program that computes the volume
of a sphere with a 10-meter radius using the formula v = 4/3pir^3.
Write the fraction 4/3 as 4.0f /3.0f*/

#include <stdio.h>
#include <math.h>
#define VOLUME_OF_THE_SPHERE (((4.0f/3.0f)*M_PI)*(10.0*10.0*10.0))


int main(void)
{
  printf("Volume of a sphere with radius equal to 10 meter: %f\n",VOLUME_OF_THE_SPHERE);
  return 0;
}
