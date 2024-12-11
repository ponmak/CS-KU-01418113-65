// 04 Tax Calculation

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_str[10];

    fgets(input_str, 10, stdin);
    float num = atof(input_str);

    if (num <= 0){
        printf("Error: Salary must be greater or equal to 0");
    } else {
        float cal_num = 0;
        if (num <= 300000){
            cal_num += num * (5.0 / 100);
        } else {
            cal_num += 300000 * (5.0 / 100);
            //printf("(!) now_cal %f\n", cal_num);
            num -= 300000;
            cal_num += num * (10.0 /100);
            //printf("(!) now_cal %f\n", cal_num);
        }

        printf("%.02f",cal_num);
    }
    
    return 0;
}
