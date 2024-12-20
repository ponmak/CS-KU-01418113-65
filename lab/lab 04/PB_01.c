// 01 แปลงเลขฐาน 4 bit
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    char num_str[7];
    fgets(num_str, 7, stdin);
    int num = atoi(num_str);

    int d0 = num & 1;
    int d1 = num >> 1 & 1;
    int d2 = num >> 2 & 1;
    int d3 = num >> 3 & 1;
    
    printf("Binary number of %d is %d%d%d%d.",num, d3, d2, d1, d0);

    return 0;
}
