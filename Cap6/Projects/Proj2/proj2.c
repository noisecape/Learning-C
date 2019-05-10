/*Write a program that asks the user to enter
two integers, then calculates and displays their greatest
common divisor (GCD)*/

#include <stdio.h>

int main(void)
{
  int m,n,gcd,remainder;
  printf("Enter two numbers [n m]: ");
  scanf("%d %d", &m, &n);
  for(;;){
    if(n == 0){
      gcd = m;
      break;
    }else{
      remainder = m%n;
      m = n;
      n = remainder;
    }
  }
  printf("The GCD is %d\n", gcd);
  return 0;
}
