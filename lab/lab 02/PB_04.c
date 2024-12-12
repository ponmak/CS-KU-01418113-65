// 04 Tax Calculation

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_str[10];

    fgets(input_str, 10, stdin);
    float num = atof(input_str);
    float cal_num = 0;

    if (num < 0){
        printf("Error: Salary must be greater or equal to 0\n");
    } else {
        if (num <= 300000.00){
            cal_num += num * (5.0 / 100);
        } else {
            cal_num += 300000.00 * (5.0 / 100);
            //printf("(!) now_cal %f\n", cal_num);
            num -= 300000.00;
            cal_num += num * (10.0 /100);
            //printf("(!) now_cal %f\n", cal_num);
        }

        printf("%.2f",cal_num);
    }
    
    return 0;
}
