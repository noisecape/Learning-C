/*
This program let the user enter a number, then checks how many
times the user entered the digits in base 10, and displays the result
using a sort of table
*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
  bool digit_seen[10] = {false};
  int countDigit[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%lu", &n);
  while(n > 0){
    digit = n % 10;
    countDigit[digit] += 1;
    n /= 10;
  }
  int size = sizeof(countDigit)/sizeof(countDigit[0]);
  printf("Digit:\t\t");
  for (int i = 0; i < size; i++){
    printf("%d\t",i);
  }
  printf("\n");
  printf("Occurrences:\t");
  for (int i = 0; i < size; i++){
    printf("%d\t", countDigit[i]);
  }
  printf("\n");
  return 0;
}
