/*Compute the Universal Product Code and check if it is valid
*/

#include <stdio.h>

int main(void)
{
  int d, i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,firstSum, secondSum, total;
  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);
  printf("Enter the first group of digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5);
  printf("Enter the second group of digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1,&j2,&j3,&j4,&j5);

  firstSum = d + i2 + i4 + j1 + j3 + j5;
  secondSum = i1 + i3 + i5 + j2 + j4;
  total = 3 * firstSum + secondSum;
   //CHECK HERE IF IS VALID;
}
