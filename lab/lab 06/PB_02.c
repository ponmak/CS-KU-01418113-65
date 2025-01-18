// 02
#include <stdio.h>
#include <stdlib.h>

unsigned long *fibo_array(unsigned int n, double *golden_ratio){
    n += 2;
    unsigned long *fibo = (unsigned long *)malloc(n * sizeof(unsigned long));
    
    fibo[0] = 0; fibo[1] = 1; fibo[2] = 1;

    for (unsigned int i = 2; i < n ; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    
    if (n > 1) {
        *golden_ratio = (double) fibo[n - 1] / fibo[n - 2];
    } else {
        *golden_ratio = 0; 
    }

    return fibo;
}

int main(int argc, char const *argv[]) {
    unsigned int n;
    double golden_ratio;
    unsigned long *fibo;

    scanf("%u", &n);
    *fibo = fibo_array(n, &golden_ratio);
    return 0;
}
