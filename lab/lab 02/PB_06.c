// 06 ตรวจสอบประเภทของตัวอักษร
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int ascii_num = getchar();

    if (ascii_num < 58 && ascii_num > 47){
        printf("Output: digit");
    } else if (ascii_num > 64 && ascii_num < 91){
        printf("Output: upper case");
    } else if (ascii_num > 96 && ascii_num < 123){
        printf("Output: lower case");
    } else {
        printf("Output: others");
    }
    
    return 0;
}
