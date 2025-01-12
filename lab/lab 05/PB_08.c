// 08 Climbing Ladder Simulator
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int num;
    printf("Input number of stairs: ");
    scanf("%d",&num);

    int i = 1;
    int now_step = 0;

    int head = 1;

    while (1){
        printf("---- round %d ----\n",i);

            for (int i_r = num-1; i_r >= 0; i_r--){
                if (i_r == head){
                    printf("|-O-|\n");
                } else if (i_r == head - 1) {
                    printf("|-^-|\n");
                } else {
                    printf("|---|\n");
                }
            }

        int step;
        printf("Input step command: ");
        scanf("%d",&step);

        if (step == 0){
            break;
        }

        if (step + head >= num){
            head = num - 1;
        } else if (head + step <= 0){
            head = 1;
        } else {
            head += step;
        }

        i++;
    }
    
    return 0;
}
