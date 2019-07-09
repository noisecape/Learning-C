#include <stdio.h>

#define ROW 9
#define COLUMN 9

void printBoard();
int createBoard(int numberOfRows, int numberOfColumns);

int main(void){
  createBoard();
  return 0;
}

int createBoard(int numberOfRows, int numberOfColumns){
  int board[ROW][COLUMN];
  return 0;
}

void printBoard(){
  printf("   |   |   \n");
  printf(" 1 | 2 | 3 \n");
  printf("___|___|___\n");
  printf("   |   |   \n");
  printf(" 4 | 5 | 6 \n");
  printf("___|___|___\n");
  printf("   |   |   \n");
  printf(" 7 | 8 | 9 \n");
  printf("   |   |   \n");
}
