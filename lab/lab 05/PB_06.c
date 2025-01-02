// 06 Combine 2 Arrays
#include <stdio.h>

int main()
{
    int i, a[5],b[5],c[10] ;

    printf("Enter array a: \n");
    for (i = 0; i < 5; i++){
        printf("Please enter an integer: ");
        scanf ("%d",&a[i]);
    }

    printf("Enter array b: \n");
    for (i = 0; i < 5; i++){
        printf("Please enter an integer: ");
        scanf ("%d",&b[i]);
    }

    int j = 0;
    for (i = 0; i < 10; i++){
        if (i < 5){
            c[i] = a[i];
        } else {
            c[i] = b[j];
            j++;
        }
    }

    printf ("Array c: ");
    for (i=0;i<10;i++)
        printf ("%d ",c[i]);

    printf ("\n");
    return 0;
}

