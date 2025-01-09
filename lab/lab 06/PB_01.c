// 01 แปลงรูปแบบ 12-hour เป็น 24-hour
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    int hour,min;
    char AM_or_PM[1] = {};

    printf("Enter a 12-hour time [eg. 12:34 am]: ");

    scanf("%d:%d %24[^\n]", &hour, &min, AM_or_PM);

    printf("%d %d %s%s",hour, min, AM_or_PM[0], AM_or_PM[1]);
    return 0;
}
