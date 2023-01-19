#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void order_pieces(char board[8][8]){
        int i, j;
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
}

void print_board(char board[8][8]){
    int a, b;
    bool queue = true;
    for(a = 0; a < 8; a++){
            for(b = 0; b < 8; b++){
                    printf("[ %c ]\t", board[a][b]);
                    if(b == 7) {
                            printf("\n\n");
                    }
            }
        }
        if(queue == true) 
            printf("\nQueue is at white.\n\n\n");
        else 
            printf("\nQueue is at black.\n\n\n");
}

int main() {
    char board[8][8];
    order_pieces(board);
    print_board(board);

    return 0;
}
