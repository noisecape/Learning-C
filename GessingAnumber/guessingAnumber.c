#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXVALUE 100
int generateNumber(void);

int main(void){
  int currentNumber,guessingNumber;
  currentNumber = generateNumber();
  for(;;){
    printf("Enter a number between 1 and %d: ", MAXVALUE);
    scanf("%d", &guessingNumber);
    if(currentNumber == guessingNumber){
      printf("You win!\n");
      break;
    }else if (guessingNumber > currentNumber){
      printf("Too high! Try again\n");
    }else{
      printf("Too low! Try again\n");
    }
  }
  return 0;
}

int generateNumber(void){
  srand(time(NULL));
  int a = rand() % MAXVALUE + 1;
  return a;
}
