#include <stdio.h>
#define MAX_SIZE 5

int top = -1;
int stack[MAX_SIZE];

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX_SIZE - 1;
}

void push(int val)
{
    if (isFull())
    {
        printf("Over Flow!!!");
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Underflow");
    }
    else
    {
        top--;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty!");
    }
    else
    {
        printf("Stack elements are: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{

    push(4);
    push(5);
    push(6);

    display();

    pop();

    display();

    return 0;
}
