#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) {
        front = rear = newNode;
        rear->next = front;   // circular link
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
    printf("\nEnqueued: %d", value);
}

// Dequeue
void dequeue() {
    if (front == NULL) {
        printf("\nUnderflow!");
        return;
    }

    if (front == rear) {  // only one element
        printf("\nDequeued: %d", front->data);
        free(front);
        front = rear = NULL;
    } else {
        struct Node* temp = front;
        printf("\nDequeued: %d", front->data);
        front = front->next;
        rear->next = front;   // maintain circular link
        free(temp);
    }
}

// Display
void display() {
    if (front == NULL) {
        printf("\nEmpty!");
        return;
    }
    printf("\nQueue: ");
    struct Node* temp = front;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
