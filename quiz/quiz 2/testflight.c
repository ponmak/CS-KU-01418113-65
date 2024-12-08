#include<stdio.h>
#include<stdlib.h>

int main(){
    // 1 ouptut : 133
    printf("%d\n", 012 + 123); // octal + decimal = decimal

    /*
    z = 10
    printf("%d", z + 123); // can't use z as it is not declared 
    */

    // 2
    /*
    char c;
    c = getchar();
    c = c + 1;
    putchar(c); // input : a output : b
    */
    

    // 3
    /*
    int x = 12, y = 23;
    int z ;

    z = -x + y--;
    printf("%d\n", z); // -12 + 23 = 11
    */

    // 4 
    /*
    */
    unsigned char a = 5, b = 3;
    unsigned char r1, r2, r3, r4, r5, r6;

    r1 = a & b; // 1 and 1 = 1
    r2 = a | b; // 7 or 3 = 7
    r3 = a ^ b; // 6 xor 3 = 5
    r4 = ~(a | 0xf0); // 10 = 0000 1010, 0xf0 = 1111 0000, ~(a | 0xf0) = 1111 0101 = 245
    r5 = a << 1; // 10 = 0000 1010, a << 1 = 20 = 0001 0100
    r6 = b >> 1; // 1 = 0000 0001, b >> 1 = 1 = 0000 0001

    printf("%d %d %d %d %d %d\n", r1, r2, r3, r4, r5, r6);
    /*
    int a = 5, b = 2, c = 8;
    int r1, r2, r3, r4, r5, r6;

    r1 = a + b * c; // 5 + 16 = 21
    r2 = (a + b) * c; // 7 * 8 = 56
    r3 = a / b * c; // 2 * 8 = 16
    r4 = a % b; // 1
    r5 = a + b / c; // 5 + 0 = 5
    r6 = (a + b) / c; // 7 / 8 = 0

    printf("%d %d %d %d %d %d\n", r1, r2, r3, r4, r5, r6);
    */

    // int 4_ways = 0; // invalid variable name
    /*
    int i, j;
    char s[12] = "Hello world";

    for (i = j = 0; i < 11; i++){
        if (s[i] != s[j] && s[i] != ' '){
            s[j++] = s[i] - 'a' + 'A';
        }
    };
    puts(s);

    printf("%d\n",  1 + 2 - 3 * 4 / 5); // 1 + 2 - 3 * 0 = 1

    printf("%d\n", (1 < 2) && (2 < 1)); // 0
    printf("%d\n", (1 < 2) || (2 < 1)); // 1
    printf("%d\n", (2 < 1) || (1 < 2)); // 0
    printf("%d\n", (2 < 1) && (1 < 2)); // 0

    int x = 5, y = 10, z = 15;
    int exp1, exp2, exp3, exp4;

    // การคำนวณค่าของแต่ละเงื่อนไข
    exp1 = (x < y) && (y < z);
    exp2 = (x > y) || (y < z);
    exp3 = !(x == y);
    exp4 = (x >= y) && !(y != z);

    // การพิมพ์ผลลัพธ์
    if (exp1)
        printf("True ");
    else
        printf("False ");

    if (exp2)
        printf("True ");
    else
        printf("False ");

    if (exp3)
        printf("True ");
    else
        printf("False ");

    if (exp4)
        printf("True ");
    else
        printf("False ");


    int pay2me;
    int lower = 10, upper = 30;
    */
    int Double;
    return 0;
}