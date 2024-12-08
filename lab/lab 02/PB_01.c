// 01 Find Error
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char hour_str[3], min_str[3];
    int hour, minute;

    printf("Enter hour: ");
    fgets(hour_str, 3, stdin);

    printf("Enter minute: ");
    fgets(min_str, 3, stdin);

    hour = atoi(hour_str);
    minute = atoi(min_str);

    printf("Time is %02d:%02d", hour, minute);
    return 0;
}