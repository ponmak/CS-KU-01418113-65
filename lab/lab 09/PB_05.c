// 05 Single Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct __node{
    int data;
    struct __node *next;
} node;

void printList(node *pList) {
    node *current = pList;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    
    printf("\n");
}

void insertNode(node *pList, int value) {
  
}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    

  }

  printList(pList);
}