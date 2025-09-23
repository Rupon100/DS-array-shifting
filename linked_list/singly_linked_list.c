// singly linked list
#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// insert at front
void insertAtFront(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// inset at end
void insertAtEnd(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(head == NULL){
        head = newNode;
        return;
    }
    
    struct node *temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    
    temp->next = newNode;
}

// insertion at any position
void insertAtAnyPosition(int value, int pos){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(pos == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    
    struct node *temp = head;
    for(int i = 1; i < pos-1 && temp != NULL; i++){
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("\nOut of range");
        return;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    
}

// delete at front
void deleteAtFront(){
    if(head == NULL) return;
    struct node *temp = head;
    head = head->next;
    free(temp);
}

// delete at end
void deleteAtEnd(){
    if(head == NULL) return;
    if(head->next == NULL){
        free(head);
        head = NULL;
        return;
    }
    struct node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// delete at any position
void deleteAtAnyPos(int pos){
    if(head == NULL) return;
    
    struct node *temp = head;
    
    // delete at pos 1
    if(pos == 1){
        head = head->next;
        free(temp);
        return;
    }
    
    // delete at given
    struct node *prev = NULL;
    for(int i = 1; i < pos && temp != NULL; i++){
        prev = temp;
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("\nNot found!");
        return;
    }
    
    prev->next = temp->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

// display all elements
void display(){
    if(head == NULL) return;
    struct node *temp = head;
    printf("\nList: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// search elements
void search(int key){
    struct node *temp = head;
    while(temp != NULL){
    if(temp->data == key){
        printf("\n%d is Found!", key);
        return;
    }
    temp = temp->next;  
}

    printf("\nNot found!");
}

int main() {
     
    insertAtFront(4);
    insertAtFront(5);
    insertAtFront(6);
    insertAtFront(7);
    
    display();
    
    insertAtEnd(9);
    
    display();
    
    insertAtAnyPosition(11, 3);
    
    display();
    
    deleteAtFront();
    
    display();
    
    deleteAtEnd();
    
    display();
    
    deleteAtAnyPos(3);
    
    display();
    
    search(4);

    return 0;
}