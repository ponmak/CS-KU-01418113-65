// 02 ลบสระออกจากสายอักขระ
#include <stdio.h>
#include <stdlib.h>

int remove_vowel(char str[])
{
    char arr[] = "aeiouAEIOU";
    int i = 0;  
    char new_str[80];

    int nstr_idx = 0;
    while (str[i] != '\0') {

        int non_vow = 0;

        for (int j = 0; arr[j] != '\0'; j++){
            if (arr[j] == str[i]){
                non_vow = 1;
                break;
            }
        }

        if (!non_vow){
            new_str[nstr_idx] = str[i];
            nstr_idx++;
        }

        i++;
    }

    new_str[nstr_idx] = '\0';

    int k;
    for (k = 0; new_str[k] != '\n'; k++) {
        str[k] = new_str[k];
    }
    
    str[k] = '\0';
}

int main()
{  char str[80];

  printf(" Input: ");
  fgets(str, 80, stdin);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}
