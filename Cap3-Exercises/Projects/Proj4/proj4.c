/*Write a program that prompt the user to enter a phone
number in the form (xxx) xxx-xxxx and then displays
the number in the form xxx.xxx.xxx*/

#include <stdio.h>

int main(void)
{
  int prefix, firstPart, secondPart;

  printf("Please enter a phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &prefix, &firstPart, &secondPart);
  printf("You entered: %d.%d.%d\n", prefix,firstPart,secondPart);
  return 0;
}
