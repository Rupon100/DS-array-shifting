#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct Node* front = NULL;

// Enqueue (insert in sorted order by priority)
void enqueue(int value, int pr) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->priority = pr;
    newNode->next = NULL;

    // If empty or higher priority than front
    if (front == NULL || pr < front->priority) {
        newNode->next = front;
        front = newNode;
    } else {
        struct Node* temp = front;
        while (temp->next != NULL && temp->next->priority <= pr) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    printf("\nEnqueued: %d (priority %d)", value, pr);
}

// Dequeue
void dequeue() {
    if (front == NULL) {
        printf("\nEmpty!");
        return;
    }
    struct Node* temp = front;
    printf("\nDequeued: %d (priority %d)", temp->data, temp->priority);
    front = front->next;
    free(temp);
}

// Display
void display() {
    if (front == NULL) {
        printf("\nEmpty!");
        return;
    }
    printf("\nQueue: ");
    struct Node* temp = front;
    while (temp != NULL) {
        printf("[val:%d, pr:%d] ", temp->data, temp->priority);
        temp = temp->next;
    }
}

int main() {
    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);
    display();
    dequeue();
    display();
    return 0;
}
