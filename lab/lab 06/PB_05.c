// 05 เส้นทางแห่งนักบวช
#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int x, int y) {

    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    board[x][y] = (int)'B';

    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for(int i = 0; i < BOARD_SIZE; i++){

        // text 
        printf("%d",i);
        printf("|");

        for (int j = 0; j < BOARD_SIZE; j++){


            if (board[j][i] != 0){
                printf("%c|", board[j][i]);
            } else if (j - i == x - y || j + i == x + y) {
                printf("X|");
            } else {
                printf(" |");
            }

        }
        printf("\n------------------\n");
    }


}

int main(int argc, char const *argv[]) {
    int x,y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x,&y);

    bishopMoves(x,y);
    return 0;
}
