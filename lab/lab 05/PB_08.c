// 08 Climbing Ladder Simulator
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int num;
    printf("Input number of stairs: ");
    scanf("%d",&num);

    int i = 1;
    int now_step = 0;
    while (1){
        printf("---- round %d ----\n",i);

        if (i == 1){
            for (int i_r = num-1; i_r >= 0; i_r--){
                if (i_r > 1){
                    printf("|---|\n");
                } else if (i_r == 1){
                    printf("|-O-|\n");
                } else {
                    printf("|-^-|\n");
                }
            }
        }

        int step;
        if (i != 1){
            printf("Input step command: ");
            scanf("%d",&step);

            if (step == 0){
                break;
            }

            for (int i_r = num-1; i_r >= 0; i_r--){
                if (i_r)
            }

        
        }
        
        i++;
    }
    
    return 0;
}
