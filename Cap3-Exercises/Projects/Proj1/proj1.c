/*Write a program that accepts a date from the user in the form mm/dd/yyyy
and then displays it in the form yyyymmdd
*/

#include <stdio.h>

int main(void)
{

  int month,day,year;

  printf("Please insert a date with the following format: mm/dd/yyyy: ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("The date inserted printed with the format: yyyymmdd: %d%.2d%.2d\n", year,month,day);
  return 0;
}
