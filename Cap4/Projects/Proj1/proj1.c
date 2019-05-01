/*Write a program that asks the user to enter a two-digit
number them pronts the numner with its digits reversed*/
#include <stdio.h>

int main(void)
{
  int digit, firstDigit, secondDigit, temp;

  printf("Please enter a number: ");
  scanf("%d", &digit);
  secondDigit = digit % 10;
  firstDigit = digit/10;
  temp = firstDigit;
  firstDigit = secondDigit;
  secondDigit = temp;

  printf("The swapped number is: %d%d\n", firstDigit,secondDigit);
}
