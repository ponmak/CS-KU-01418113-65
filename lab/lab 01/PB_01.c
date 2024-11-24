// 01 คอมพิวเตอร์ทำงาน

#include<stdio.h>
int main(){
    int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    int d;
    int h;
    int m;
    
    d = computer_time / (24*60);
    computer_time = computer_time - (d*24*60);
    h = computer_time / 60;
    m = computer_time - (h*60);
    printf("It is %d days %d hours and %d minutes.", d, h, m);
    
    return 0;
}
