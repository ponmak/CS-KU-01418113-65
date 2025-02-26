// 06 จำนวนบิตที่ไม่ใช่ 0

#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits = (n&1) + ((n>>1)&1) + ((n>>2)&1) + ((n>>3)&1) + ((n>>4)&1) + ((n>>5)&1) + ((n>>6)&1) + ((n>>7)&1) + ((n>>8)&1);
    

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}