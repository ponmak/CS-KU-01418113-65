#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 69;
    int *i_ptr = &i;

    printf("%p\n", i_ptr);
    printf("%d\n", *i_ptr);
    printf("%p\n", &i_ptr);
    printf("---------\n");

    *i_ptr = 30;
    printf("%p\n", i_ptr);
    printf("%d\n", *i_ptr);
    printf("%p\n", &i_ptr);
    

    return 0;
}