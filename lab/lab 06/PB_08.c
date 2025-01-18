// 08 นักโทษแห่งอัซคาบัน
#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {


		killerPtr = &prisoners[((numPrisoners + m) % m) + 1];

		
		for (int i = size; i < size; i++){
			printf("%d ", array[i]);
		}
	
		printf("\n");
		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}  

void removeKilled(int *array, int size, int killedPrisoner){
	for (int i = killedPrisoner - 1; i < size; i++) {
        array[i] = array[i + 1];
    }
}

