// 05 Alphabet Reflection
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    char num_str[10];
    fgets(num_str, 10, stdin);
    int num = atoi(num_str);

    if (num != 0){
        int i,j;
        for (i=0;i<num-1;i++) {
            if (j != num-1) {
                int temp = j+num;
                char f_char = 'a' + temp;
                printf("%c-",f_char);
                j++;
            } else {
                j = 0;
                int temp = j+num;
                char f_char = 'a' + temp;
                printf("%c-",f_char);
                j++;
            }
        }

        int temp = j+num;
        char f_char = 'a' + temp;
        printf("%c",f_char);
    } else {
        printf("-");
    }

    return 0;
}
