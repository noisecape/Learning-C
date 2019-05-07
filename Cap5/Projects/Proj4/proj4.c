/*Write a program that asks the user to enter a wind speed (in knots)
then displays it the corrisponding description using the
Beaufort scale*/

#include <stdio.h>

int main(void)
{
  float windKnot;
  printf("Enter wind force in knots: ");
  scanf("%f", &windKnot);
  if (windKnot >= 0 && windKnot < 1){
    printf("Calm\n");
  }else if(windKnot >= 1 && windKnot <= 3){
    printf("Light air\n");
  }else if(windKnot >= 4 && windKnot <= 27){
    printf("Breeze\n");
  }else if(windKnot >= 28 && windKnot <= 47){
    printf("Gale\n");
  }else if(windKnot >= 48 && windKnot <= 63){
    printf("Storm\n");
  }else{
    printf("Hurricane\n");
  }
  return 0;
}
