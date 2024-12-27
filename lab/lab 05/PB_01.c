// 01 Automorphic Number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    long long int n;
    printf("Input n = ");
    scanf("%lld", &n);

    printf("n^2 = %lld\n", n*n);

    int i = 1;
    long long int n_copy = n;
    while (n_copy > 10){
        n_copy = n_copy % 10;
        i++;
    }
    
    long long int pow_n_last = (n * n) % (pow(10, i));
    printf("%lld %d\n",pow_n_last,  n);

    if (pow_n_last == n) {
        printf("Yes. %lld is automorphic number.", n);
    } else {
        printf("No. %lld is not automorphic number.", n);
    }

    return 0;
}
