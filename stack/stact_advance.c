#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int top = -1;
int arr[SIZE];

void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element: ");
        scanf("%d", &x);
        top += 1;
        arr[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!");
    }
    else
    {
        printf("Element poped!");
        top -= 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!");
    }
    else
    {
        printf("\nStack elements are: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    // stack
    int choice;

    while (1)
    {
        printf("\nPerform operation of the stack.");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");

        printf("\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);

        default:
            printf("\nInvalid Choice.");
        }
    }

    return 0;
}