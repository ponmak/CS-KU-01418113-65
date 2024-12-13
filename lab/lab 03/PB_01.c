// 01 Counting
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    char num_str[42];
    fgets(num_str, 42, stdin);
    int num = atoi(num_str);

    int i;
    for(i = num; i >= 0; i--) {
        printf("%d\n", i);
    }
    
    /* do - while loop*/
    i = num;
    do {
        printf("%d\n", i);
        i--;
    } while (i >=0);

    return 0;
}
