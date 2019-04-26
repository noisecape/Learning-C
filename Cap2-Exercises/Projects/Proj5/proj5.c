/*Write a program that asks the user to enter a value for x and then
displays the value of the following polynomial 3x^5+2x^4-5x^3-x^2+7x-6*/
#include <stdio.h>
#define POLYNOMIAL (3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+(7*x)-6)

int main(void)
{

  int x;

  printf("Please enter a value for x: ");
  scanf("%d", &x);
  printf("Computing polynomial 3x^5+2x^4-5x^3-x^2+7x-6...\n");
  printf("Result: %d\n", POLYNOMIAL);
}
