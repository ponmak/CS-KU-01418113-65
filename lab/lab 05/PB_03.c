// 03 Shift Array
#include <stdio.h>
#include <stdlib.h>

void shift_left(char str[], int n);

int main()
{  char str[80], *c;
   int n;

   printf("String: ");
   fgets(str, sizeof(str), stdin);
   for (c=str; *c && *c != '\n'; c++)
       ;
   *c = 0;
   printf("     n: ");
   scanf("%d", &n);
   shift_left(str, n);
   printf("Output: >>%s<<\n",str);
   return 0;
}

void shift_left(char str[], int n){
    int i = 0;
    int count = 0;

    while (str[count] != '\0'){
        count++;
    }
    
    char temp_str[count];

    for (i = 0; i < count - n; i++){
        temp_str[i] = str[(i + n) % count];
    }

    for ( i = 0; i < n; i++){
        temp_str[count - n + i] = str[i];
    }

    for (i = 0; i < count; i++){
        str[i] = temp_str[i];
    }
    
}
