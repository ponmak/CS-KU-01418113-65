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
    int i;
    for ()
}
