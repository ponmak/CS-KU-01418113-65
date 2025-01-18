// 04 โซ่คำ (3%)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int len, n;

    scanf("%d", &len);
    scanf("%d", &n);

    char **arr = (char **)malloc(n * sizeof(char *));

    
    for (int i = 0; i < n;i++){
        arr[i] = malloc((len+1) * sizeof(char));
        scanf("%s", arr[i]);
    }

    char *temp = arr[0];

    int count = 0, i;
    for (i = 0; i < n; i++){
        //printf("(+) %c\n", arr[i][0]);
        count = 0;
        for (int j = 0;arr[i][j] != '\0'; j++){
            if (temp[j] != arr[i][j]){
                //printf("(!) i=%d : %c : %c : %d\n", i,arr[0][j],arr[i][j], arr[0][j]==arr[i][j]);
                count++;
            }
        }

        if (count > 2){
            printf("%s", arr[i-1]);
            break;
        }

        temp = arr[i];
    }

    if (count <= 2) {
        printf("%s\n", arr[n-1]);
    }

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

