// 07 Nested For loop (draw triangle 4)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    char num_str[7];
    fgets(num_str, 7, stdin);
    int num = atoi(num_str);

    int i;

    for (i = 1 ; i <= num * 2 - 1; i++) {
        
        int j;
        if (i <= num) {
            for (j = 1; j <= i; j++){
                printf("*");
            }
        } else {
            for (j = num * 2 - 1; j >= i; j--){
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
