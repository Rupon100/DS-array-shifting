#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;              /* Data */
    struct node *next;     /* Pointer */
};

struct node *head = NULL;   // Head pointer

// Insert at beginning
void insertAtFirst(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertAtLast(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert at specific position (1 = first)
void insertAtPosition(int value, int pos) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete node at specific position (1 = first)
void deleteAtPosition(int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *temp = head;

    if (pos == 1) {
        head = head->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return;
    }

    struct node *prev = NULL;
    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }

    prev->next = temp->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

// Display list
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int ch, value, pos;

    while (1) {
        printf("\n1. Insert at First\n2. Insert at Last\n3. Insert at Position\n4. Delete at Position\n5. Display\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtFirst(value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtLast(value);
                break;
            case 3:
                printf("Enter value and position: ");
                scanf("%d %d", &value, &pos);
                insertAtPosition(value, pos);
                break;
            case 4:
                printf("Enter position: ");
                scanf("%d", &pos);
                deleteAtPosition(pos);
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
