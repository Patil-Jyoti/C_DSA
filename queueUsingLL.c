#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

// Define the Queue structure with front and rear pointers
struct Queue {
    struct Node *front, *rear;
};

// Initialize an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Enqueue a new node to the queue
void enqueue(struct Queue* queue, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
    printf("Enqueued %d to the queue\n", value);
}

// Dequeue a node from the queue
int dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;
    }
    struct Node* temp = queue->front;
    int dequeuedValue = temp->data;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp);
    printf("Dequeued %d from the queue\n", dequeuedValue);
    return dequeuedValue;
}

// Display the queue elements
void displayQueue(struct Queue* queue) {
    struct Node* temp = queue->front;
    if (queue->front == NULL) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    displayQueue(queue);

    dequeue(queue);
    displayQueue(queue);

    return 0;
}