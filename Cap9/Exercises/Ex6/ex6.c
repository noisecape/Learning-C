#include <stdio.h>

int digit(int n, int k);
int computeDivisor(int k);
int main(void){

  int n,k;

  printf("Insert two digits: ");
  scanf("%d %d", &n, &k);
  printf("The digit at %d is: %d\n", k, digit(n,k));
  return 0;
}

int digit(int n, int k){
  int divisor = computeDivisor(k), digit;
  digit = n/divisor;
  digit %=10;
  return digit;
}

int computeDivisor(int k){
  int divisor = 1;

  for(int i = 0; i < k; i++){
    divisor *= 10;
  }
  return divisor;
}
