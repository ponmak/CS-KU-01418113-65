// 04 คำนวณเกรด โดยใช้ struct และ array
#include <stdio.h>
#include <stdlib.h>

struct __student{
    long int ID;
    int midterm;
    int final;
    char grade;
};

void calculateGrade(struct __student *student){

    int sum = student->final + student->midterm;

    if (sum >= 80){
        student->grade = 'A';
    } else if (sum >= 70){
        student->grade = 'B';
    } else if (sum >= 60){
        student->grade = 'C';
    } else if (sum >= 50){
        student->grade = 'D';
    } else{
        student->grade = 'F';
    }
}

int main(){

    struct __student students[5];

    // input
    for (int i = 0; i < 5; i++){
        printf("Enter Student ID: ");
        scanf("%ld", &students[i].ID);

        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].midterm);

        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }

    for (int i = 0; i < 5; i++){
        calculateGrade(&students[i]);
        printf("Student ID %ld receives grade %c.\n", students[i].ID, students[i].grade);
    }

    return 0;
}



