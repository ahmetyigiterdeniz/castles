#include <stdio.h>

int main() {
  int board[8][8], i, j;
        for(i = 0; i < 8; i++){
                for(j = 0; j < 8; j++){
                        board[i][j] = i*8+j+1;
                }
        }
  for(i = 0; i < 8; i++){
          for(j = 0; j < 8; j++){
                  printf("[\t%d\t]", board[i][j]);
                  if(j == 7) {
                          printf("\n");
                  }
          }
  }
        return 0;
}
