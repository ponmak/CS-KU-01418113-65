// 02 ฟังก์ชัน is_prime()
#include <stdio.h>
#include <stdlib.h>

int is_prime(int x){
    int i,count;

    for ( i = 2 ; i < x; i++) {
        if (x % i == 0) {
            count++;
        }
    }

    if (count > 2) {
        return 0;
    } else {
        return 1;
    }

}

int main() {
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 1 ; i < n ; i++) {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        } else {
            printf("kuy\n");
        }
    }

    return 0;
}