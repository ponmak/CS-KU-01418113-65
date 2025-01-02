// 01 Automorphic Number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    long long int n;
    printf("Input n = ");
    scanf("%lld", &n);

    long long int pow_n = n*n;
    printf("n^2 = %lld\n", pow_n);

    long long int pow_n_last = 0;

    int i = 0;
    int copy_n = n;
    while (copy_n > 0){
        copy_n /= 10;
        i++;
    }

    pow_n_last = pow_n % (long long int)pow(10, i);

    if (pow_n_last == n) {
        printf("Yes. %lld is automorphic number.", n);
    } else {
        printf("No. %lld is not automorphic number.", n);
    }

    return 0;
}
