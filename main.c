#include <stdio.h>

int main() {
  char board[8][8], i, j;
        for(i = 0; i < 8; i++){
                for(j = 0; j < 8; j++){
                        
                        if(i == 1 || i == 6) {
                                board[i][j] = 'P';
                        }
                        else if(j == 0 || j == 7) {
                                board[i][j] = 'K';
                        }
                        else if(j == 1 || j == 6) {
                                board[i][j] = 'A';
                        } 
                        else if(j == 2 || j == 5) {
                                board[i][j] = 'F';
                        }
                        else if(j == 3) {
                                board[i][j] = 'V';
                        }
                }
        }
  for(i = 0; i < 8; i++){
          for(j = 0; j < 8; j++){
                  printf("[ %c ]\t ", board[i][j]);
                  if(j == 7) {
                          printf("\n");
                  }
          }
  }
        return 0;
}
