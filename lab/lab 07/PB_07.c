// 07 เปลี่ยนเลขโรมันให้เป็นเลขอารบิก
#include <stdio.h>

void roman2arabic(char input[],char output[]){
    int i = 0;
    int j = 0;
    while (input[i] != '\0'){
        
        if (input[i] == 'I'){
            if (input[i+1] == 'V'){
                output[j] = '4';
                i += 2;
            } else if (input[i+1] == 'X'){
                output[j] = '9';
                i += 2;
            } else if (input[i+1] == 'I'){
                if (input[i+2] == 'I'){
                    output[j] = '3';
                    i += 3;
                } else {
                    output[j] = '2';
                    i += 2;
                }
            } else {
                output[i] = '1';
                i += 1;
            }
        } else if (input[i] == 'V'){
            if (input[i+1] == 'I'){
                if (input[i+2] == 'I'){
                    if (input[i+3] == 'I'){
                        output[j] = '8';
                        i += 4;
                    } else {
                        output[j] = '7';
                        i += 3;
                    }
                } else {
                    output[j] = '6';
                    i += 2;
                }
            } else {
                output[j] = '5';
                i += 1;
            }
        } else {
            output[j] = input[i];
            i++;
        }
        j++;
        //printf("%s\n",output);
    }

    output[j] = '\0';
}


int main()
{   char input[80],output[80];

    printf(" Input: ");
    gets(input);  /* read a line of characters from the input to "input" variable */

    roman2arabic(input,output);
    printf("Output: %s\n",output);

    return 0;
}
