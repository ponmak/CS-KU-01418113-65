#include <stdio.h>

int main(){

	int array[10];
    
    int i;
	for (i = 0; i < 10; i++) {
		array[i] = i + 1;
	}

    int temp = array[3];
    int j = 3;
	for (; j < 9; j++){
		array[j] = array[j+1];
	}

    array[j] = temp;

    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
}