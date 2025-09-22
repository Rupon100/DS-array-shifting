#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(rear == NULL){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
    
    printf("\nEnqueued: %d", value);
}

void dequeue(){
    if(front == NULL){
        printf("\nUnderflow!");
        return;
    }
    
    struct node *temp = front;
    printf("\nDequeued: %d", front->data);
    front = front->next;
    
    if(front == NULL) rear = NULL;
    free(temp);
}

void display(){
    if(front == NULL){
        printf("\nEmpty");
        return;
    }
    
    struct node *temp = front;
    printf("\nQuueue: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    
    return 0;
}



