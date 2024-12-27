// 08 แปลงเลขฐาน (recursion)
#include <stdio.h>
#include <stdlib.h>

int recursion(int x){

    if (x < 2){
        printf("%d",x);
        return 0;
    } else{
        recursion(x / 2);
        printf("%d", x % 2);
        return 0;
    }
}

int main(int argc, char const *argv[]) {
    
    char num_str[7];
    fgets(num_str, 7, stdin);
    int num = atoi(num_str);

    recursion(num);

    return 0;
}
