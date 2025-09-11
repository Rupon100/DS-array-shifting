#include <stdio.h>
#include <stdlib.h>

#define max 5

int queue[max];
int front = -1, rear = -1;

void insert(int element)
{
    if (rear == max - 1)
    {
        printf("\nQueue Overflow!");
        return;
    }

    // for first element
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = element;
        return;
    }

    // correct position for new element
    int i;
    for (i = rear; i >= front; i--)
    {
        if (element > queue[i])
        {
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

// delete (highest priority = front element)
void delete()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
        return;
    }

    printf("\nDeleted: %d\n", queue[front]);

    // if only one element
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

// display queue
void display()
{
    if (front == -1)
    {
        printf("\nQueue is empty!\n");
        return;
    }

    printf("\nCuurent queue element: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int element, ch;
    printf("1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n");

    while (1)
    {
        printf("Enter option: ");
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
            printf("Wrong option!");
        }
    }
    return 0;
}