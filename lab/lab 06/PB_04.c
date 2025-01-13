// 04 Chess Board
#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {

    // get n loop
    int n;
    scanf("%d", &n);

    int x_pos, y_pos;
    char piece;
    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    for (int i = 0; i < n; i++){
        scanf("\n%c(%d, %d)", &piece, &x_pos, &y_pos);
        setPieceOnTable(board,piece,x_pos,y_pos);
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for(int i = 0; i < BOARD_SIZE; i++){
        printf("%d",i);
        printf("|");
        for (int j = 0; j < BOARD_SIZE; j++){
            
            if (board[j][i] != 0){
                printf("%c|", board[j][i]);
            } else {
                printf(" |");
            }

        }
        printf("\n");
    }
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[xPos][yPos] = piece;
}
