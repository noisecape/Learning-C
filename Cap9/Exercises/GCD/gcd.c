#include <stdio.h>

int computeGCD(int m, int n);

int main(void){
  int m,n;

  printf("Enter two digits: ");
  scanf("%d %d", &m, &n);
  printf("GCD: %d\n", computeGCD(m,n));
  return 0;
}

int computeGCD(int m, int n){
  int remainder,gcd;
  for(;;){
    if(n == 0){
      gcd = m;
      break;
    }
    remainder = m%n;
    m = n;
    n = remainder;
  }
  return gcd;
}
