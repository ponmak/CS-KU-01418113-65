// 05 ประเภทสามเหลี่ยม
#include <stdio.h>
#include <stdlib.h>

int main() {
    char A_str[10], B_str[10], C_str[10];

    printf("Enter length of side A: ");
    fgets(A_str, 10, stdin);
    printf("Enter length of side B: ");    
    fgets(B_str, 10, stdin);
    printf("Enter length of side C: ");    
    fgets(C_str, 10, stdin);

    int A = atoi(A_str);
    int B = atoi(B_str);
    int C = atoi(C_str);
    
    if ((A < 1) || (B < 1) || (C < 1) || (A+B <= C) || (B+C <= A) || (C+A <= B)) {
        printf("Triangle type is invalid.");
    } else if (A == B && B == C & C == A) {
        printf("Triangle type is equilateral.");
    } else if ((A == B && B != C) || (A == C && B!= C) || (C == B && B != A)) {
        printf("Triangle type is isosceles.");
    } else {
        printf("Triangle type is scalene.");
    }
    
    return 0;
}
