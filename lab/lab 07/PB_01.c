// 01 นับสระในสายอักขระ
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    printf("String (without a space): ");

    char text[69];
    scanf("%s",text);
    char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count = 0;
    int i = 0;
    while (text[i] != '\0') {
        for (int j = 0; j < sizeof(arr); j++){
            if (arr[j] == text[i]){
                printf("%c ", text[i]);
                count++;
            }
        }

        i++;
    }
    printf("\n");

    if (count < 2){
        printf("This string contains %d vowel.", count);
    } else {
        printf("This string contains %d vowels.", count);
    }
    
    return 0;
}
