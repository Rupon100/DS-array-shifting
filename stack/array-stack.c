#include <stdio.h>
#define Max_Stack 5
int main()
{
    int stack[Max_Stack];
    int top = -1;
    int pushValue;

    // push a element
    while (1)
    {
        if (top == Max_Stack - 1)
        {
            printf("OverFlow \n");
            break;
        }
        else
        {
            top++;
            printf("Enter a value to push: ");
            scanf("%d", &pushValue);
            stack[top] = pushValue;
            printf("Pushed: %d \n", pushValue);
        }
    }

    // pop a value
    if (top == -1)
    {
        printf("Underflow!!\n");
    }
    else
    {
        printf("Pooped: %d\n", stack[top]);
        top--;
    }

    // peek a value(just return or copy)
    if (top == -1)
    {
        printf("Underflow!!");
    }
    else
    {
        printf("Only peek Top position element: %d\n", stack[top]);
    }

    // display all
    if (top == -1)
    {
        printf("Array is empty!\n");
    }
    else
    {
        printf("Final Array: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
    }

    return 0;
}
