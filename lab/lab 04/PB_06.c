// 06 Collection Bank
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    printf("Enter your goal amount: ");
    char goal_str[10];
    fgets(goal_str, 10, stdin);

    float goal = atof(goal_str);
    float total = 0.0;

    int count = 1;
    while (goal > 0) {
        printf("Enter money collected today: ");
        
        char collected_str[10];
        fgets(collected_str, 10, stdin);
        float collected = atof(collected_str);

        goal -= collected;
        total += collected;

        if (goal <= 0){
            break;
        }
        
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", count, total, goal);
        count++;
    }
    
    if (count == 1)
    {
        printf("Congratulations! You take %d day to reach your goal.\n",count); 
    } else {
        printf("Congratulations! You take %d days to reach your goal.\n",count); 
    }
    
    

    return 0;
}
