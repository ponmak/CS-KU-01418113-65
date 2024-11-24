// 03 GPA Calculator
#include<stdio.h>
int main()
{   
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 18;
    float requiredGrade = 2.00;

    float ans = ((requiredGrade * (preCredit + credit)) - (preCredit * preGrade)) / credit;
    printf("The GPA this semester should be %.2f",ans);
    return 0;
}