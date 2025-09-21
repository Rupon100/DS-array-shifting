// doubly linked list -> single linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

// insert
void insertEnd(int value){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    
    // if empty
    if(head == NULL){
        head = newNode;
        return;
    }
    
    // for last
    struct node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->prev = temp;
}

// delete
void deleteValue(int value){
    if(head == NULL){
        printf("\nEmpty list!");
        return;
    }
    
    struct node *temp = head;
    
    // find the node with give value
    while(temp != NULL && temp->data != value){
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("\nNot Found Value");
    }
    
    // if delating head node
    if(temp == head){
        head = temp->next;
        if(head != NULL) head->prev = NULL;
        free(temp);
        return;
    }
    
    // delete middle for last
    if(temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    if(temp->prev != NULL){
        temp->prev->next = temp->next;
    }
    
    free(temp);
}

// diaplay
void display(){
    if(head == NULL){
        printf("\nEmpty List");
        return;
    }
    
    struct node *temp = head;
    printf("\nList: ");
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    
    
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    display();   // List: 10 20 30

    deleteValue(20);
    display();   // List: 10 30

    deleteValue(10);
    display();   // List: 30

    deleteValue(100); // Value not found

    
    return 0;
}


