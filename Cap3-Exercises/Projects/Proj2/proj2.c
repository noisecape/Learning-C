/*Write a program that formats product information
entered by the user.*/

#include <stdio.h>

int main(void)
{
  int itemID,year,month,day;
  float price;

  printf("Enter item number: ");
  scanf("%d", &itemID);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month,&day,&year);
  printf("Item\t\t\tUnit\t\t\tPurchase\n");
  printf("\t\t\tPrice\t\t\tDate\n");
  printf("%d\t\t\t$ %f\t\t%.2d/%.2d/%d\n", itemID, price,month,day,year);
  return 0;
}
