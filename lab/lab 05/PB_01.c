// 01 Automorphic Number
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    long long int n;
    printf("Input n = ");
    scanf("%lld", &n);

    printf("n^2 = %lld\n", n*n);

    int i = 1;
    long long int n_copy = n;
    while (n_copy != 0){
        n_copy %= 10;
        printf("%lld", n_copy);
        i++;
    }
    
    long long int pow_n_last = (n * n) % 10;

    if (pow_n_last == n % 10) {
        printf("Yes. %lld is automorphic number.", n);
    } else {
        printf("No. %lld is not automorphic number.", n);
    }

    return 0;
}
