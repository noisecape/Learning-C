/*Write a program that calculates how many digits a number
contains*/

#include <stdio.h>

int main(void)
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);
  if(number >=1 && number <= 9)
  {
    printf("The number %d has one digit\n", number);
  }else if( number >= 10 && number <= 99)
  {
    printf("The number %d has two digit\n", number);
  }else if(number >= 100 && number <= 999){
    printf("The number %d has three digit\n", number);
  }else{
    printf("The number %d has more than three digit\n", number);
  }
  return 0;
}
