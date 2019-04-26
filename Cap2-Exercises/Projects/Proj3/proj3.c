/*Modify the project 3 so that it asks the user to enter
the radius of the sphere*/
#include <stdio.h>
#include <math.h>
#define VOLUME_OF_THE_SPHERE (((4.0f/3.0f)*M_PI))


int main(void)
{

  float radius;

  printf("Please enter a radius in meters:");
  scanf("%f", &radius);
  printf("Volume of a sphere with radius equal to %.1f meter: %.3f\n",radius,VOLUME_OF_THE_SPHERE*
  radius*radius*radius);

  return 0;
}
