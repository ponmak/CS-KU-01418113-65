// 05 Alphabet Rangoli
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    char num_str[10];
    fgets(num_str, 10, stdin);
    int num = atoi(num_str);

    if (num <= 26 && num > 0){

        // upper
        int i_upper;
        for (i_upper = 0; i_upper < num; i_upper++){
        
            int bar_formula = num + num - 2 - (2 * i_upper); 
            
            // first bar
            int f_bar;
            for (f_bar = 0;bar_formula > f_bar; f_bar++){
                printf("-");
            }

            // first char
            int start_char = 'a' + num - 1;
            int i;

            for (i = 0; i < (i_upper - 1) + 2; i++){
                printf("%c", start_char - i);
                if (i != i_upper) {
                    printf("-");
                }
            }

            if (i_upper != 0) {
                start_char = 'a' + num - 1;
                for (i = i_upper -1; i >= 0; i--){
                    if (i != i_upper){
                        printf("-");
                    }
                    printf("%c", start_char - i);

                }
            }

            // second bar
            for (f_bar = 0;bar_formula > f_bar; f_bar++){
                printf("-");
            }
    

            printf("\n");
        }
        
        int i_lower;
        for (i_lower = num -2; i_lower >= 0 ; i_lower--){
        
            int bar_formula = num + num - 2 - (2 * i_lower); 
            
            // first bar
            int f_bar;
            for (f_bar = 0;bar_formula > f_bar; f_bar++){
                printf("-");
            }

            // first char
            int start_char = 'a' + num - 1;
            int i;

            for (i = 0; i < (i_lower - 1) + 2; i++){
                printf("%c", start_char - i);
                if (i != i_lower) {
                    printf("-");
                }
            }

            if (i_upper != 0) {
                start_char = 'a' + num - 1;
                for (i = i_lower -1; i >= 0; i--){
                    if (i != i_lower){
                        printf("-");
                    }
                    printf("%c", start_char - i);

                }
            }

            // second bar
            for (f_bar = 0;bar_formula > f_bar; f_bar++){
                printf("-");
            }
    

            printf("\n");
        }

    } else {
        printf("-");
    }
    
    return 0;
}
