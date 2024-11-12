#include <stdio.h>
#include <stdlib.h>
//stack using linked list..
// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Push a new node onto the stack
void push(struct Node** top, int value) {//node 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));//mem 
    if (!newNode) {///no node
        printf("Memory allocation error\n");
        return;
    }
    newNode->data = value;//10
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d onto the stack\n", value);//10
}

// Pop a node from the stack
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack is empty! Cannot pop\n");
        return -1;
    }
    struct Node* temp = *top;//0
    int poppedValue = temp->data;//10
    *top = (*top)->next;//20
    free(temp);//10
    printf("Popped %d from the stack\n", poppedValue);//10
    return poppedValue;
}

// Display the stack elements
void displayStack(struct Node* top) {
    struct Node* temp = top;
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        while (temp != NULL) {//0
            printf("%d ", temp->data);//10 30  
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Node* stack = NULL;//->

    push(&stack, 10);//add stack value 10
    push(&stack, 20);//20
    push(&stack, 30);//30
    displayStack(stack);//10 20 30

    pop(&stack);//30
    displayStack(stack);//10 20

    return 0;
}