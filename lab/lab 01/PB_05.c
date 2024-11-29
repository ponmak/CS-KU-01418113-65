// 05 ทอนเงิน (อย่างง่าย)
#include<stdio.h>

int main(){
    int amount = 5;

    int five;
    int twenety;
    int fifty;

    // fifty
    fifty = amount / 50;
    amount = amount - (50 * fifty);

    // twenety
    twenety = amount / 20;
    amount = amount - (20 * twenety);

    // five
    five = amount / 5;
    amount = amount - (5 * five);

    // left is amount
    printf("1: %d\n5: %d\n20: %d\n50: %d", amount, five, twenety, fifty);
}
