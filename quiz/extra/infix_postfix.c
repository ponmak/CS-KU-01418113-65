#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    char data;
    struct Node *next;
} Node;

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void pop(Node **head) {
    Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main(){

    Node *head = NULL;
    char infix[100];
    printf("Enter infix expression: ");
    scanf("%s", infix);

    for(int i = 0; infix[i]; i++){
        Node *newnode = (Node *)malloc(sizeof(Node));
        newnode->data = infix[i];
        newnode->next = NULL;

        if(head == NULL){
            head = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }

        if (infix[i] == ')'){
            while(head->data != '('){
                printf("%c", head->data);
                pop(&head);
            } 
        } else if (isOperator(infix[i])){
            
        }
    }
    return 0;
}