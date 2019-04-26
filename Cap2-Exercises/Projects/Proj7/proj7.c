/*write a program that asks the user to enter a US dollar amount
and then shows how to pay that amount using the smallest number of $20, $10, $5
$1 bills*/

#include <stdio.h>

int main(void)
{
  int dollars, twenties, tents, fives, ones;

  printf("Please enter a US dollar amount: ");
  scanf("%d", &dollars);
  twenties = dollars / 20;
  dollars = dollars - (20*twenties);
  printf("Numbers of $20: %d\n", twenties);
  tents = dollars / 10;
  dollars = dollars - (10*tents);
  printf("Numbers of $10: %d\n", tents);
  fives = dollars / 5;
  dollars = dollars - (5*fives);
  printf("Numbers of $5: %d\n", fives);
  ones = dollars / 1;
  dollars = dollars - (1*ones);
  printf("Numbers of $1: %d\n", ones);
}
