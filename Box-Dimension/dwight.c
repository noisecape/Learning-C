/* Computes the dimensional wight of a 12" x 10" x 8" box */

#include<stdio.h>

int main(void)
{
  int height = 8, length = 12, width = 10, volume, weight;
  height = 8;
  length = 12;
  width = 10;
  volume = height*length*width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%dx\n", height,length,width);
  printf("Volume: %d\n",volume);
  printf("Dimensional weigth in pounds: %d\n", (volume + 165) / 166);

}
