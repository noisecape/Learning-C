/*Write a program tha finds the largest in a series of numbers entered
by the user. The program must prompt the user to enter numbers one by
one. When the user enters 0 or a negative numberm the program must
display the largest nonnegative number entered:*/

#include <stdio.h>

int main(void)
{
  float numberEntered;
  float currentLargestNumber;

  for(;;){
    printf("Enter a number: ");
    scanf("%f", &numberEntered);
    if(numberEntered == 0){
      break;
    }else if(numberEntered > currentLargestNumber){
      currentLargestNumber = numberEntered;
      numberEntered = 0;
    }
  }
  printf("The largest number entered was %.2f\n", currentLargestNumber);
  return 0;
}
