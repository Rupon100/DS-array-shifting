#include<stdio.h>
#include<stdlib.h>

// Corrected: Added semicolon
struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    
    // Check for memory allocation failure
    if (newNode == NULL) {
        printf("Memory allocation failed. Cannot enqueue.\n");
        return;
    }
    
    newNode->data = value;
    newNode->next = NULL;
    
    if(rear == NULL){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
    printf("Inserted: %d\n", value);
}

void dequeue(){
    if(front == NULL){
        printf("Underflow! Queue is empty.\n");
    }else{
        // Corrected: Added temp pointer to free memory
        struct node *temp = front;
        printf("Dequeued: %d\n", temp->data);
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        // Free the memory of the old front node to prevent memory leaks
        free(temp);
    }
}


void display(){
    if(front == NULL){
        printf("Queue is empty!\n");
    }else{
        // Corrected: Typo `ndoe` to `node`
        struct node *temp = front;
        printf("Queue: ");
        while(temp != NULL){
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}


int main(){
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    display();
    
    return 0;
}