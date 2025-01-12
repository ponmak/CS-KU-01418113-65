#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[] = {1,2,3,4};
    int *ptr = arr;
    int **dptr = &ptr;
    ptr++;
    printf("%d", **dptr);
    return 0;
}
