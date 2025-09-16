// #include <stdio.h>
// #define MAX_SIZE 5

// int top = -1;
// int stack[MAX_SIZE];

// int isEmpty()
// {
//     return top == -1;
// }

// int isFull()
// {
//     return top == MAX_SIZE - 1;
// }

// void push(int val)
// {
//     if (isFull())
//     {
//         printf("Over Flow!!!");
//     }
//     else
//     {
//         top++;
//         stack[top] = val;
//     }
// }

// void pop()
// {
//     if (isEmpty())
//     {
//         printf("Underflow");
//     }
//     else
//     {
//         top--;
//     }
// }

// void display()
// {
//     if (isEmpty())
//     {
//         printf("Stack is empty!");
//     }
//     else
//     {
//         printf("Stack elements are: ");
//         for (int i = 0; i <= top; i++)
//         {
//             printf("%d ", stack[i]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {

//     push(4);
//     push(5);
//     push(6);

//     display();

//     pop();

//     display();

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int top = -1;
int stack[SIZE];

// int isFull
int isFull()
{
    if (top == SIZE - 1)
        return 1;
    return 0;
}

// int is emtpy
int isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}

// void push
void push()
{
    int x;
    if (isFull())
    {
        printf("\nOverflow!");
    }
    else
    {
        printf("Enter the element: ");
        scanf("%d", &x);
        top += 1;
        stack[top] = x;
    }
}

// void pop
void pop()
{
    if (isEmpty())
    {
        printf("\nUnderflow!");
    }
    else
    {
        top -= 1;
    }
}

// void show
void show()
{
    if (isEmpty())
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nStack are: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }
}

// int peek
int peek()
{
    if (isEmpty())
    {
        printf("\nUnderflow!");
    }
    else
    {
        printf("Top Value: %d", stack[top]);
    }
}

int main()
{
    int choice;

    printf("\nEnter option: ");
    printf("\n1 for push\n2for pop\n3 for peek\n4 for display\n5 for peek\n6 for exit");

    while (1)
    {
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
            peek();
            break;
        case 4:
            show();
            break;
        case 5:
            peek();
            break;
        case 6:
            exit(0);
            default : printf("\nInvalid Option Choice!");
        }
    }

    return 0;
}