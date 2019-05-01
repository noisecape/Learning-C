/*Extend the project1 such that it can handles 3 digits*/

#include <stdio.h>

int main(void)
{
  int digit, firstDigit,secondDigit,thirdDigit,temp1;
  printf("Please enter a number: ");
  scanf("%d", &digit);
  thirdDigit = digit % 10;
  digit = digit / 10;
  secondDigit = digit % 10;
  firstDigit = digit / 10;
  temp1 = firstDigit;
  firstDigit = thirdDigit;
  thirdDigit = temp1;
  printf("The swapped number is: %d%d%d\n", firstDigit,secondDigit,thirdDigit);
}
