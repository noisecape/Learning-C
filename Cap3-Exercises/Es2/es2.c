#include <stdio.h>

int main(void)
{
  float x = 120.123;
  printf("%8.1e\n", x);
  printf("%-10.6e\n", x);
  printf("%8.3f\n", x);
  printf("%-6f\n", x);

  float a,c;
  int b;

  scanf("%f%d%f",&a,&b,&c);
  printf("%f -- %d -- %f\n",a,b,c);
}
