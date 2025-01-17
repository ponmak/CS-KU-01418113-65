// 04 โซ่คำ (3%)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int len, n;

    scanf("%d", &len);
    scanf("%d", &n);

    char **arr = (char **)malloc(n * 8);

    for (int i = 0; i < n;i++){
        arr[i] = malloc(len);
        scanf("%s", arr[i]);
    }

    int count = 0, i;
    for (i = 0; i < n; i++){
        //printf("(+) %c\n", arr[i][0]);

        for (int j = 0; arr[i][j] != '\0'; j++){
            if (arr[0][j]!=arr[i][j]){
                //printf("(!) i=%d : %c : %c : %d\n", i,arr[0][j],arr[i][j], arr[0][j]==arr[i][j]);
                count++;
            }
        }

        if (count > 2){
            printf("%s", arr[i-1]);
            break;
        }

        count = 0;
    }

    if (!count){
        printf("%s", arr[i-1]);
    }
    return 0;
}

