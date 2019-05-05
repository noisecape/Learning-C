/*Write a program that asks the user for a 24h
time then displays the number in 12h time form*/

#include <stdio.h>

int main(void)
{
  int hour, minutes;
  printf("Enter a 24h time form: ");
  scanf("%d:%d", &hour, &minutes);

  switch(hour)
  {
    case 1:
    case 12:
    printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, minutes);
    break;
    case 13:
    printf("Equivalent 12-hour time: 1:%.2d PM\n", minutes);
    break;
    case 14:
    printf("Equivalent 12-hour time: 2:%.2d PM\n", minutes);
    break;
    case 15:
    printf("Equivalent 12-hour time: 3:%.2d PM\n", minutes);
    break;
    case 16:
    printf("Equivalent 12-hour time: 4:%.2d PM\n", minutes);
    break;
    case 17:
    printf("Equivalent 12-hour time: 5:%.2d PM\n", minutes);
    break;
    case 18:
    printf("Equivalent 12-hour time: 6:%.2d PM\n", minutes);
    break;
    case 19:
    printf("Equivalent 12-hour time: 7:%.2d PM\n", minutes);
    break;
    case 20:
    printf("Equivalent 12-hour time: 8:%.2d PM\n", minutes);
    break;
    case 21:
    printf("Equivalent 12-hour time: 9:%.2d PM\n", minutes);
    break;
    case 22:
    printf("Equivalent 12-hour time: 10:%.2d PM\n", minutes);
    break;
    case 23:
    printf("Equivalent 12-hour time: 11:%.2d PM\n", minutes);
    break;
    default:
    printf("Equivalent 12-hour time: 00:%.2d AM\n", minutes);
    break;
  }
  return 0;
}
