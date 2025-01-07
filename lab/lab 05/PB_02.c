// 02  Pythagorean Triple
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int num;
    scanf("%d", &num);

    int a,b,c;
    for (a = 1; a <= num; a++){
        for (b = a; b < num; b++){
            c = num - a - b;
            if (a*a + b*b == c*c){
                printf("(%d, %d, %d)\n", a, b, c);
                return 0;
            }

        }
    }

    printf("No triple found.");
    return 0;
}
