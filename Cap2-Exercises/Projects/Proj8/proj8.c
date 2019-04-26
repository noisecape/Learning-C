/*Write a program that calculates the remaining balance on a loan after the
firts second and third monthly payments*/

#include <stdio.h>
#define MONTHLY_INTEREST_RATE (interestRate/1200)

int main(void)
{

  float loanAmount, interestRate, monthlyPayment, monthlyInterestRate;

  printf("Enter amount of load: ");
  scanf("%f", &loanAmount);
  printf("Enter interest rate: ");
  scanf("%f", &interestRate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthlyPayment);

  monthlyInterestRate = MONTHLY_INTEREST_RATE;
  loanAmount = loanAmount + (loanAmount * monthlyInterestRate);
  loanAmount -= monthlyPayment;
  printf("Balance remaining after first payment: %.2f\n", loanAmount);

  loanAmount = loanAmount + (loanAmount * monthlyInterestRate);
  loanAmount -= monthlyPayment;
  printf("Balance remaining after second payment: %.2f\n", loanAmount);

  loanAmount = loanAmount + (loanAmount * monthlyInterestRate);
  loanAmount -= monthlyPayment;
  printf("Balance remaining after third payment: %.2f\n", loanAmount);
}
