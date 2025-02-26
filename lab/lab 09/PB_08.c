// Stock Log File

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename){

    /* file preview
    4
    20170401,12:54:00,T Shirt L,1,120.00
    20170401,12:56:32,Boxer,2,90.00
    20170401,13:12:34,T Shirt L,2,200.00
    20170401,13:12:34,Boxer,2,98.00
    20170401,14:29:17,T Shirt M,4,480.00
    20170401,16:39:27,Shorts M,1,120.50
    20170401,17:12:34,T Shirt L,3,350.00
    */

    FILE *path = fopen(filename, "r");

    // amount of products
    int nStock;
    fscanf(path, "%d", &nStock);

    // create array of products
    Product *products = malloc(nStock * sizeof(Product));

    // temp of variables
    char name[30];
    int amount;
    double totalCost;

    int count = 0;
    // read products
    while (fscanf(path, "%*d,%*[^,],%29[^,],%d,%lf", name, &amount, &totalCost) != EOF) {

        // check if product exists
        int flag = 0;
        int j;
        for ( j = 0; j < count; j++) {
            if (strcmp(products[j].name, name) == 0) {
                products[j].amount += amount;
                products[j].totalCost += totalCost;
                flag = 1;
                break;
            }
        }

        if (!flag){
            strcpy(products[j].name, name);
            products[j].amount = amount;
            products[j].totalCost = totalCost;
            count++;
        }

    }
    
    fclose(path);
    
    printStock(products, nStock);
    free(products);
}



int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}