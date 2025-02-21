// 04 Word Count
#include<stdio.h>
#include<string.h>

struct Word {
    char word[21];
    int count;
};

int main(){
    char input[21];
    int i, last_word = 0, find = 0;
    struct Word data[20] = {0};
    
    scanf("%20s", input);
    
    while(1 && last_word != 19) {
        
        if (strcmp(input, "exit") == 0){
            break;
        }

        if (last_word == 0){
            strcpy(data[last_word].word, input);
            data[last_word].count = 1;
        } else {
            scanf("%20s", input);
        }

                
        if (strcmp(input, "exit") == 0){
            break;
        }
        
        for (i = 0; i < last_word; i++){
            if (strcmp(input, data[i].word) == 0){
                find = 1;
                break;
            } 
        }

        if (find){
            data[i].count += 1;
        } else {
            strcpy(data[i].word, input);
            data[i].count = 1;
            last_word++;
        }

        i = 0;
        find = 0;
    }
    
    printf("Output:\n");
    for(i=0;i<last_word;i++){
        printf("%s = %d\n", data[i].word, data[i].count);
    }
}