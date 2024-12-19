// 03 Simplest-Form Fractions
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    char a_str[10], b_str[10];
    fgets(a_str, 10, stdin);
    fgets(b_str, 10, stdin);
    long long int a, b, m, n, temp;

    a = atoll(a_str);
    b = atoll(b_str);
    m = a;
    n = b;

    // GCD result   
    while (n != 0) {
        temp = m % n;
        m = n;
        n = temp;
    }

    a /= m;
    b /= m;

    if (b == 1){
        printf("= %lld\n", a);
    } else {
        printf("= %lld/%lld\n", a, b);
    }

    return 0;
}
