// 06 Sorted linked list (C)

#include <stdio.h>
#include <stdlib.h>

typedef struct __node{
    int data;
    struct __node *next;
} node;

void printList(node *pList) {

    // [ 1 4 5 ]
    node *current = pList;

    printf("[ ");
    if (current == NULL) {
        printf("]\n");
        return;
    } else {
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
    }
    printf("]\n");
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

void deleteNode(node **pList, int value) {
    node *current = *pList;
    node *prev = NULL;
    
    while (current != NULL && current->data == value) {
        *pList = current->next;
        free(current);
        current = *pList;
    }
    
    while (current != NULL) {
        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == NULL) {
            return;
        }

        prev->next = current->next;
        free(current);
        current = prev->next;
    }
}

int main(){
    node *pList=NULL;
    char command;
    int value;

    while (1){
        printf("input> ");
        scanf(" %c", &command);

        if (command == 'i'){
            scanf(" %d", &value);
            insertNode(&pList, value);
        } else if (command == 'p'){
            printList(pList);
        } else if (command == 'q'){
            break;
        } else if (command == 'd'){
            scanf(" %d", &value);
            deleteNode(&pList, value);
        }

    }


}