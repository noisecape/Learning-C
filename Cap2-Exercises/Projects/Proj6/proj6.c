/*Modify the previous exercise using the Horner's Rule:
((((3x+2)x-5)x-1)x+7)x-6 Doing so we do fewer moltiplications, resulting
in better performances*/

#include <stdio.h>
#define HORNER_RULE (((((3*x+2)*x-5)*x-1)*x+7)*x-6)

int main(void)
{
  int x;
  printf("Please enter a value for x: ");
  scanf("%d", &x);
  printf("Computing polynomial 3x^5+2x^4-5x^3-x^2+7x-6...\n");
  printf("Result: %d\n", HORNER_RULE);
}
