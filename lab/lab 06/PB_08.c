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
		
		// killerPtr = &prisoners[((numPrisoners + m) % m) + 1]; // ver 1 : not working
		// output : 3 3 3 3 3 3 3 3 3 3

		// killerPtr = &prisoners[(((*killerPtr + m ) % m) + 1)]; // ver 2 : not working 
		// output : 3 2 6 2 7 6 2 8 8 8

		killerPtr = &prisoners[((killerPtr - &prisoners[0] + (m - 1)) % (numPrisoners - i))];
		
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

	int temp = array[killedPrisoner];
	int j = killedPrisoner;
	for (; j < size - 1; j++){
		array[j] = array[j+1];
	}

	array[j] = temp;
}

