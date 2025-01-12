// 03
include <stdio.h>
#define ARRAY_SIZE 98


int main() {

  int i, j;
  int A[ARRAY_SIZE] = {0};

  for (i = 2; i < ARRAY_SIZE; i++)
    A[i] = 1;

  for (
i = 2; i < ARRAY_SIZE; i++
) {
    
 if (A[i] == 0 ){
            continue;
        } else{
        for (j = i + 1; j < ARRAY_SIZE; j++) {
            if (j % i == 0) {
                A[j] = 0;
            } 
        }
        }

  }

  for (i = 2; i < ARRAY_SIZE; i++)
    
if(A[i] == 1)

        printf("%d ",
i
);

  printf("\n");

  return 0;
}
