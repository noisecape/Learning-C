/*Write a program that asks the user to enter a fraction
then reduces the fraction to lowest terms*/
#include <stdio.h>

int main()
{
  int mOriginal,nOriginal,m,n,gcd,remainder;
  printf("Enter two numbers [m/n]: ");
  scanf("%d/%d", &m, &n);
  mOriginal = m;
  nOriginal = n;
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
  mOriginal /= gcd;
  nOriginal /= gcd;
  printf("In lowest terms: %d/%d\n", mOriginal,nOriginal);
  return 0;
}
