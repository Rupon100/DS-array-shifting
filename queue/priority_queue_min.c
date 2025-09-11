#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// Insert element by priority (smaller = higher priority)
void insert(int element)
{
    if (rear == MAX - 1)
    {
        printf("\nQueue Overflow!\n");
        return;
    }

    // First element
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = element;
        return;
    }

    // Find correct position (smaller numbers go to front)
    int i;
    for (i = rear; i >= front; i--)
    {
        if (element < queue[i])
        { // shift larger elements right
            queue[i + 1] = queue[i];
        }
        else
        {
            break;
        }
    }

    queue[i + 1] = element;
    rear++;
}

// Delete (remove highest priority = smallest number at front)
void delete()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
        return;
    }

    printf("\nDeleted: %d\n", queue[front]);

    // If only one element
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

// Display queue
void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
        return;
    }

    printf("\nCurrent queue (min priority): ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int ch, element;

    printf("1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n");

    while (1)
    {
        printf("\nEnter option: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &element);
            insert(element);
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Wrong option!\n");
        }
    }

    return 0;
}
