// 06 ถักอักขระ (1) (blank)
#include <stdio.h>
#include <stdlib.h>

int charcount(char *s)
{
    int i = 0;
    while (s[i] != '\0'){i++;}
    return i;
}

void charweave(char *s,char *result)
{
    int len = charcount(s) - 1;
    int i = 0, j = 0;

    char half[100];
    
    for (;i <= len*2; i++){
        if (i % 2 == 0) {
            result[i] = s[j];
            half[i] = s[j];
            j++;
        } else {
            result[i] = s[len];
            half[i] = s[len];
            len--;
        }
    }

    j = 0;
    // printf("%s",half);
    len = charcount(s) - 1;
    for(;i <= len*4;i++,j++){
            result[i] = half[len - j];
    }
    result[i] = '\0';
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}
