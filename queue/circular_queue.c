#include <stdio.h>

#define max 5

int queue[max];
int front = -1;
int rear = -1;

// void enqueue
void enqueue(int element)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else
    {
        rear = (rear + 1) % max;
        queue[rear] = element;
    }
}

// void dequeue
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nUnderflow!!");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % max;
    }
}

// void display
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("\nUnderflow!");
    }
    else
    {
        printf("Queue elements are: ");
        while (i <= rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % max;
        }
    }
}

int main()
{
    int choice = 1, x; // variables declaration

    while (choice < 4 && choice != 0) // while loop
    {
        printf("Press 1: Insert an element");
        printf("\nPress 2: Delete an element");
        printf("\nPress 3: Display the element");
        printf("\nEnter your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("Enter the element which is to be inserted\n");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
        }
    }
    return 0;
}
