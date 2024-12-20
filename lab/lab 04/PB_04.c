// 04 พิมพ์สี่เหลี่ยมขนมเปียกปูน
#include <stdio.h>
#include <stdlib.h>

int main() {
    char x_str[5], y_str[5];
    fgets(x_str, 5, stdin);
    fgets(y_str, 5, stdin);
    
    int x = atoi(x_str);
    int y = atoi(y_str);

    int i,j;

    for ( i = 0; i < y; i++) {
        
        int k;
        for (k = 0; k < i; k++){
            printf(" ");
        }

        for (j == 0; j < x; j++){
            if ( i == 0 || i == y - 1) {
                printf("*");
            } else if (j == 0 || j == x - 1){
                printf("*");
            } else {
                printf("HE");
            }
        }        

        printf("\n");
    }
    
    return 0;
}
