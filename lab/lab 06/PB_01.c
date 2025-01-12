// 01 แปลงรูปแบบ 12-hour เป็น 24-hour
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    
    int hour,min;
    char *A_or_P;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");

    scanf("%d:%d %s", &hour, &min, A_or_P);

    if (A_or_P[0] == 'p' || A_or_P[0] == 'P'){
        if (hour == 12 && min == 0){
            printf("Equivalent 24-hour time: 00:00");
        } else if (hour == 12){
            printf("Equivalent 24-hour time: %02d:%02d", hour, min);
        } else {
            printf("Equivalent 24-hour time: %02d:%02d", 12 + hour, min);
        }
    } else {
        if (hour == 12){
            printf("Equivalent 24-hour time: 00:00");
        } else {
            printf("Equivalent 24-hour time: %02d:%02d",  hour, min);
        }
    }

    return 0;
}
