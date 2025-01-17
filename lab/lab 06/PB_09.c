// 09 แยกสระจากสตริง
#include <stdio.h>
#include <stdlib.h>

void str_extract(char** source, char** vowel);

int main() {
    char* str = malloc(201);
    scanf("%[^\n]s", str);
    char* vowel = NULL;

    str_extract(&str, &vowel);

    printf("Consonants: \"%s\"\n", str);
    printf("    Vowels: \"%s\"\n", vowel);

    free(str);
    free(vowel);
    return 0;
}

void str_extract(char** source, char** vowel) {

    // **source = 'k';
    // printf("%s\n", source[0][0]);
    // vowel[0] = *source;
    // printf("%s\n", vowel[0]);

    char* str = *source; 
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    *vowel = malloc(len + 1);

    char* vowels = *vowel;
    int str_idx = 0, con_index = 0, vowel_index = 0;

    char arr[] = "aeiouAEIOU";

    while (str[str_idx] != '\0') {
        char ch = str[str_idx];
        int is_vowel = 0;

        for (int i = 0; i < 10; i++) {
            if (ch == arr[i]) {
                is_vowel = 1;
                break;
            }
        }

        if (is_vowel) {
            vowels[vowel_index++] = ch; 
        } else {
            str[con_index++] = ch; 
        }

        str_idx++;
    }

    vowels[vowel_index] = '\0';
    str[con_index] = '\0';
}