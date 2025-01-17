// 05 ก็อปปี้และเปลี่ยนอักษรใน string เป็นตัวใหญ่

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* stoupper(const char *str){

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    char *new_str = (char*)malloc(100);

    int i;
    for (i = 0; str[i] != '\0'; i++){
        new_str[i] = (char)toupper(str[i]);
    }

    new_str[i] = '\0';
    return new_str;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}
