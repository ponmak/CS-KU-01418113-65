// 04 พิมพ์สี่เหลี่ยมขนมเปียกปูน
#include <stdio.h>
#include <stdlib.h>

int main() {
    char x_str[5], y_str[5];
    fgets(x_str, 5, stdin);
    fgets(y_str, 5, stdin);
    
    int x = atoi(x_str);
    int y = atoi(y_str);

    int i;

    for ( i = 0; i < y; i++) {
        
        int k;
        for (k = 0; k < i; k++){
            printf(" ");
        }

        int j;
        for (j = 0; j < x; j++){
            if ( i == 0 || i == y - 1 || j == 0 || j == x - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }        

        printf("\n");
    }
    
    return 0;
}
