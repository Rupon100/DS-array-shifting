#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node *next;
};

struct node *front = NULL;

void enqueue(int value, int pr)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->priority = pr;
    newNode->next = NULL;

    if (front == NULL || pr < front->priority)
    {
        newNode->next = front;
        front = newNode;
    }
    else
    {
        struct node *temp = front;
        while (temp->next != NULL && temp->next->priority <= pr)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Inserted: %d - (pririty: %d)", value, pr);
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty!");
    }
    else
    {
        front = front->next;
    }
}

void peek()
{
    if (front == NULL)
    {
        printf("Queue is empty!");
    }
    else
    {
        printf("Front: %d - (priority: %d)", front->data, front->priority);
    }
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        struct node *temp = front;
        printf("Queue: ");
        while (temp != NULL)
        {
            printf("[%d | p=%d] ", temp->data, temp->priority);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{

    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);
    display();

    dequeue();
    display();

    enqueue(40, 0);
    display();

    peek();

    return 0;
}
