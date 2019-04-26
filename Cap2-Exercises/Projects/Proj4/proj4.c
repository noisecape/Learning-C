/*Write a program that asks the user to enter a dollars-and-cents amount
the displays the amout with 5% tax added*/
#include <stdio.h>
#define FIVE_PERC_TAX ((dollars*5)/100)

int main(void)
{
  float dollars;
  printf("Please enter an amount: ");
  scanf("%f$", &dollars);
  dollars += FIVE_PERC_TAX;
  printf("With tax added: %f $\n", dollars);
  return 0;
}
