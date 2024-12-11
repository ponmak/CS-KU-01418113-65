// 08 ร้านขายพิซซา
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char size_str[5], ex_pepperoni_str[5], ex_cheese_str[5], ex_mushroom_str[5];

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str, 5, stdin);

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(ex_pepperoni_str, 5, stdin);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(ex_cheese_str, 5, stdin);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(ex_mushroom_str, 5, stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    int size = atoi(size_str);
    int ex_pepperoni = atoi(ex_pepperoni_str);
    int ex_cheese = atoi(ex_cheese_str);
    int ex_mushroom = atoi(ex_mushroom_str);

    int fixedcost = 5;
    int basecost = 2;

    int diameter;

    // diameter set
    if (size == 1){
        diameter = 10;
    } else if (size == 2){
        diameter = 16; 
    } else if (size == 3){
        diameter = 20; 
    }

    // extra set
    
    float extracost = 0;

    if (ex_pepperoni == 1){
        extracost += 0.5;
    } 

    if (ex_cheese == 1){
        extracost += 0.25;
    }

    if (ex_mushroom == 1){
        extracost += 0.30;
    }

    float area = M_PI * diameter * diameter / 4;
    float price = 1.5 * (fixedcost + (basecost * area) + (extracost * area));

    printf("Your order costs %.02f baht.\n", price);
    printf("Thank you.");

    return 0;
}
