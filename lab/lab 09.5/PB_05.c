// 07 Hashing - Chaining (C)

#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->item);
        current = current->next;
    }
}

void add(Node** hashTable, int key) {
  int index = key % SIZE;
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->item = key;
  newNode->next = hashTable[index];
  hashTable[index] = newNode;
}

int main(){

    Node* hashTable[SIZE];


    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = NULL;
    }

    char command;
    int key;
    
    while (1){
        printf("input> ");
        scanf(" %c", &command);

        if (command == 'p'){
            for (int i = 0; i < SIZE; i++) {
                printf("KEY %2d: ", i);
                printList(hashTable[i]);
                printf("\n");
            }
        } else if (command == 'a'){
            scanf(" %d", &key);
            add(hashTable, key);
        } else if (command == 'q'){
            break;
        }
    }
    return 0;
}