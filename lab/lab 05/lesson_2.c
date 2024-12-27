#include <stdio.h>
#include <stdlib.h>

// pass by value : augment will be the same (copy)
int cubeByValue(int n) {
    n = n * n * n;
    return n;
}

// pass by ref : 
int cubeByRef(int *n) {
    *n = *n * *n * *n;
    return *n;
}

int main() {

    int num = 10;
    int result = cubeByValue(num);
    
    // by ref
    int numB = 10;
    int *numb_ptr = &numB;
    int result_r = cubeByRef(numb_ptr);

    printf("%d",result_r);
    printf("%d", numB);

    return 0;
}