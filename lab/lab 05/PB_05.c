// 05 พิมพ์สามเหลี่ยมไปทางขวาด้วยอักขระ 2 ตัว
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    printf("Enter n: ");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            if (j % 2 == 0){
                printf("-");
            } else {
                printf("x");
            }
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j < i; j++){
            if (j % 2 == 0){
                printf("-");
            } else {
                printf("x");
            }
        }

        printf("\n");
    }


}
