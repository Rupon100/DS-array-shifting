// // doubly linked list -> single linked list
// #include<stdio.h>
// #include<stdlib.h>

// struct node {
//     int data;
//     struct node *prev;
//     struct node *next;
// };

// struct node *head = NULL;

// // insert
// void insertEnd(int value){
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->prev = NULL;
//     newNode->next = NULL;
    
//     // if empty
//     if(head == NULL){
//         head = newNode;
//         return;
//     }
    
//     // for last
//     struct node *temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
    
//     temp->next = newNode;
//     newNode->prev = temp;
// }

// // delete
// void deleteValue(int value){
//     if(head == NULL){
//         printf("\nEmpty list!");
//         return;
//     }
    
//     struct node *temp = head;
    
//     // find the node with give value
//     while(temp != NULL && temp->data != value){
//         temp = temp->next;
//     }
    
//     if(temp == NULL){
//         printf("\nNot Found Value");
//     }
    
//     // if delating head node
//     if(temp == head){
//         head = temp->next;
//         if(head != NULL) head->prev = NULL;
//         free(temp);
//         return;
//     }
    
//     // delete middle for last
//     if(temp->next != NULL){
//         temp->next->prev = temp->prev;
//     }
//     if(temp->prev != NULL){
//         temp->prev->next = temp->next;
//     }
    
//     free(temp);
// }

// // diaplay
// void display(){
//     if(head == NULL){
//         printf("\nEmpty List");
//         return;
//     }
    
//     struct node *temp = head;
//     printf("\nList: ");
//     while(temp != NULL){
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main(){
    
    
//     insertEnd(10);
//     insertEnd(20);
//     insertEnd(30);
//     display();   // List: 10 20 30

//     deleteValue(20);
//     display();   // List: 10 30

//     deleteValue(10);
//     display();   // List: 30

//     deleteValue(100); // Value not found

    
//     return 0;
// }








#include <stdio.h>
#include <stdlib.h>

// Node structure of doubly linked list
struct node {
    int data;              // data part
    struct node *prev;     // pointer to previous node
    struct node *next;     // pointer to next node
};

// global head pointer (start of list)
struct node *head = NULL;

// ---------------- Insert at Beginning ----------------
void insertFirst(int value) {
    // create new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->prev = NULL;    // first node has no previous
    newNode->next = head;    // new node points to old head

    // if list was not empty, fix old head's prev
    if (head != NULL) {
        head->prev = newNode;
    }

    // move head to new node
    head = newNode;
}

// ---------------- Insert at End ----------------
void insertEnd(int value) {
    // create new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    // if list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // otherwise, go to last node
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // link last node with new node
    temp->next = newNode;
    newNode->prev = temp;
}

// ---------------- Insert at Any Position ----------------
void insertAtAny(int value, int pos) {
    if (pos <= 1 || head == NULL) {
        // if position is 1 or list is empty, insert at beginning
        insertFirst(value);
        return;
    }

    struct node *temp = head;
    // move temp to (pos-1)th node
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    // create new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;

    // if inserting not at end
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

// ---------------- Insert After a Specific Value ----------------
void insertAfterValue(int after, int value) {
    struct node *temp = head;

    // search for the "after" value
    while (temp != NULL && temp->data != after) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found!\n", after);
        return;
    }

    // create new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;

    // fix next node's prev (if not inserting at end)
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    // link current node to new node
    temp->next = newNode;
}

// ---------------- Delete by Value ----------------
void deleteValue(int value) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *temp = head;

    // search node with given value
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found!\n", value);
        return;
    }

    // if deleting head node
    if (temp == head) {
        head = temp->next;          // move head to next
        if (head != NULL) head->prev = NULL; // fix prev of new head
        free(temp);
        return;
    }

    // if middle node: connect prev and next
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    free(temp);
}

// ---------------- Display ----------------
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// ---------------- Main ----------------
int main() {
    // insert at end
    insertEnd(10);  // List: 10
    insertEnd(20);  // List: 10 20
    insertEnd(30);  // List: 10 20 30
    display();

    // insert at beginning
    insertFirst(5);  // List: 5 10 20 30
    display();

    // insert at any position (pos=3 -> after 10)
    insertAtAny(15, 3); // List: 5 10 15 20 30
    display();

    // insert after a specific value (after 20)
    insertAfterValue(20, 25); // List: 5 10 15 20 25 30
    display();

    // delete values
    deleteValue(20);  // remove 20
    display();        // List: 5 10 15 25 30

    deleteValue(5);   // remove head (5)
    display();        // List: 10 15 25 30

    deleteValue(100); // try removing a non-existing value
    display();

    return 0;
}
