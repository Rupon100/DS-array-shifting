#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// stack top pointer
struct node *top = NULL;

// push intert ar top
void push(int element)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = element;
    newNode->next = top;
    top = newNode;
}

// delete
int pop()
{
    if (top == NULL)
    {
        printf("Underflow!");
    }
    else
    {
        printf("Poped: %d\n", top->data);
        top = top->next;
    }
}

// show the top
void peek()
{
    if (top == NULL)
    {
        printf("Underflow!");
    }
    else
    {
        printf("Top element: %d\n", top->data);
    }
}

// display
void display()
{
    if (top == NULL)
    {
        printf("Underflow!");
    }
    else
    {
        struct node *temp = top;
        while (temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("Null\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();

    peek();

    pop();
    display();
    return 0;
}
