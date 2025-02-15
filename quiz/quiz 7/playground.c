#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    struct node *next, *right;
} Node;

int main(){
    //struct node *head, *prev, *tmp;
    Node *head, *prev, *tmp;
    printf("Hello, World!\n");

    head = (Node*)malloc(sizeof(Node));    
    head->data = 1;
    
    printf("head->data = %d\n", head->data);

    // head = (struct node*)malloc(sizeof(struct node));
    // head->data = 'A';
    // head->next = (struct node*)malloc(sizeof(struct node));
    // head->next->data = 'B';
    // head->next->next = (struct node*)malloc(sizeof(struct node));
    // head->next->next->data = 'C';
    // head->next->next->next = (struct node*)malloc(sizeof(struct node));
    // head->next->next->next->data = 'D';
    // head->next->next->next->next = NULL;

    // prev = head;
    // for (tmp = head; tmp != NULL; tmp = tmp->next){
    //     if (tmp->data == 'C'){
    //         prev->next = tmp->next;
    //     } else {
    //         prev = tmp;
    //     }
    //     printf("%c\n", tmp->data);
    // }

    // free(tmp);
    // // delete the second node
    // // tmp = head->next->next;
    // // prev->next = tmp->next;
    // // free(tmp);

    // printf("After deletion\n");
    // for (tmp = head; tmp != NULL; tmp = tmp->next){
    //     printf("%c\n", tmp->data);
    // }

    // // insert a new node 

    // tmp = (struct node*)malloc(sizeof(struct node));
    // tmp->data = 'E';

    // tmp->next = head;
    // head = tmp;

    // printf("After insertion\n");
    // for (tmp = head; tmp != NULL; tmp = tmp->next){
    //     printf("%c\n", tmp->data);
    // }
    
    return 0;
}
