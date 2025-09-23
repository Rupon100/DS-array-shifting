// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;              /* Data */
//     struct node *next;     /* Pointer */
// };

// struct node *head = NULL;   // Head pointer

// // Insert at beginning
// void insertAtFirst(int value) {
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->next = head;
//     head = newNode;
// }

// // Insert at end
// void insertAtLast(int value) {
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         head = newNode;
//         return;
//     }

//     struct node *temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Insert at specific position (1 = first)
// void insertAtPosition(int value, int pos) {
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = value;

//     if (pos == 1) {
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     struct node *temp = head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Position out of range!\n");
//         free(newNode);
//         return;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // Delete node at specific position (1 = first)
// void deleteAtPosition(int pos) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return;
//     }

//     struct node *temp = head;

//     if (pos == 1) {
//         head = head->next;
//         printf("Deleted: %d\n", temp->data);
//         free(temp);
//         return;
//     }

//     struct node *prev = NULL;
//     for (int i = 1; i < pos && temp != NULL; i++) {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Position out of range!\n");
//         return;
//     }

//     prev->next = temp->next;
//     printf("Deleted: %d\n", temp->data);
//     free(temp);
// }

// // Display list
// void display() {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return;
//     }

//     struct node *temp = head;
//     printf("Linked List: ");
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     int ch, value, pos;

//     while (1) {
//         printf("\n1. Insert at First\n2. Insert at Last\n3. Insert at Position\n4. Delete at Position\n5. Display\n6. Exit\n");
//         printf("Enter choice: ");
//         scanf("%d", &ch);

//         switch (ch) {
//             case 1:
//                 printf("Enter value: ");
//                 scanf("%d", &value);
//                 insertAtFirst(value);
//                 break;
//             case 2:
//                 printf("Enter value: ");
//                 scanf("%d", &value);
//                 insertAtLast(value);
//                 break;
//             case 3:
//                 printf("Enter value and position: ");
//                 scanf("%d %d", &value, &pos);
//                 insertAtPosition(value, pos);
//                 break;
//             case 4:
//                 printf("Enter position: ");
//                 scanf("%d", &pos);
//                 deleteAtPosition(pos);
//                 break;
//             case 5:
//                 display();
//                 break;
//             case 6:
//                 exit(0);
//             default:
//                 printf("Invalid choice!\n");
//         }
//     }

//     return 0;
// }








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

// insertion at any postition
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

// delete at any postiion
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