// 05 Alphabet Reflection
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    char num_str[10];
    fgets(num_str, 10, stdin);
    int num = atoi(num_str);

    if (num == 1) {
        printf("a");
    } else if (num > 0 && num <= 26){
        int f_char = (int)'a' + num;
        int i;
        int j = 1;
        for (i = 0; i < (num - 1) + num; i++){
            if (i < num - 1){
                f_char -= j;
                printf("%c-",f_char);
            } else if (i == num -1){
                f_char = (int)'a';
                printf("%c-",f_char);
            } else {
                f_char += j;
                if (i != (num - 1) + num - 1){
                    printf("%c-",f_char);
                } else {
                    printf("%c",f_char);
                }
            }
        }
    } else {
        printf("-");
    }

    return 0;
}
