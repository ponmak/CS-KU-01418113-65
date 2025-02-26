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

void insertNode(node **pList, int value) {
  
      node *newNode = (node*)malloc(sizeof(node));
      newNode->data = value;
      newNode->next = NULL;
      
      if (*pList == NULL || (*pList)->data >= value) {
          newNode->next = *pList;
          *pList = newNode;
          return;
      }
      
      node *current = *pList;
      while (current->next != NULL && current->next->data < value) {
          current = current->next;
      }

      newNode->next = current->next;
      current->next = newNode;
}
  


int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode(&pList, value);
  }

  printList(pList);
}