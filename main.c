#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
  char board[8][8], i, j;
  bool queue = true;
        for(i = 0; i < 8; i++){
                for(j = 0; j < 8; j++){
                        
                        if(i == 1 || i == 6) {
                                board[i][j] = 'P';
                        }
                        else if(i == 0 || i == 7) {
                            if(j == 0 || j == 7) {
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
                            else if(j == 4) {
                                board[i][j] = 'S';
                            }
                        }
                        else {
                            board[i][j] = ' ';
                        }
                }
        }
    int print_board() {
        for(i = 0; i < 8; i++){
            for(j = 0; j < 8; j++){
                    printf("[ %c ]\t ", board[i][j]);
                    if(j == 7) {
                            printf("\n");
                    }
            }
        }
        if(queue == true) {
            printf("\nQueue is at white.\n\n\n");
        } else {
            printf("\nQueue is at black.\n\n\n");
        }
        return 0;
    }
  
    print_board();

    if(queue == true) {
        printf("\nQueue is at white.\n\n\n");
    }

    char move[3] = "e4";
    if(move[0] == 'e'){
        board[4][4] = 'P';
        board[6][4] = ' ';
        queue = !queue;
        print_board();
    }

    return 0;
}
