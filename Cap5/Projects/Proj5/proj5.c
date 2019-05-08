#include <stdio.h>

int main(void)
{
  float income;
  printf("Enter the amount of taxable income: ");
  scanf("%f", &income);
  if(income < 750){
    float taxes = income - (income /100);
    printf("Taxable of %5.3f: %5.3f\n", income, taxes);
  }else if(income >= 750 && income < 2250){
    float taxes = income - 7.50 - ((income *2)/100);
    printf("Taxable 7.50 plus of %5.3f: %5.3f\n",income, taxes);
  }else if(income >= 2250 && income < 3750){
    float taxes = income - 37.50 - ((income *3)/100);
    printf("Taxable 37.50 plus of %5.3f: %5.3f\n",income, taxes);
  }else if(income >= 3750 && income < 5250){
    float taxes = income - 82.50 - ((income *4)/100);
    printf("Taxable 82.50 plus of %5.3f: %5.3f\n",income, taxes);
  }else if(income >= 5250 && income < 7000){
    float taxes = income - 142.50 - ((income *5)/100);
    printf("Taxable 142.50 plus of %5.3f: %5.3f\n",income, taxes);
  }else{
    float taxes = income - 230 - ((income *6)/100);
    printf("Taxable 230 plus of %5.3f: %5.3f\n",income, taxes);
  }
  return 0;
}
