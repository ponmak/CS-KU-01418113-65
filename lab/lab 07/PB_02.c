// 02 ลบสระออกจากสายอักขระ
#include <stdio.h>

int remove_vowel(char str[])
{
    char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i = 0;

    char *new_str;
    while (str[i] != '\0') {
        for (int j = 0; j < sizeof(arr); j++){
            if (arr[j] != str[i]){
                new_str[i] = str[i];
            }
        }
        i++;
    }

    while (str[i] != '\0'){
        str[i] = new_str[i];
    }

    while (new_str[i] != '\0')
    {
        printf("%c", new_str[i]);
    }
    
}

int main()
{  char str[80];

  printf(" Input: ");
  fgets(str, 80, stdin);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}
