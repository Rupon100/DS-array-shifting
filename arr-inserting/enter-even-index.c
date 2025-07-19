/*
    Declare an Array, take Size, Elements dynamically. Insert an
   element in any of the Even index position except 0th index.
   [Take the position dynamically]
*/
#include <stdio.h>
int main()
{
    int size, newelement, position;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];

    // take elements dynamically
    printf("Enter array elements: \n");
    for (int i = 0; i < size - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    // entererd elements array are
    printf("Entered array: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    // for new line
    printf("\n");

    // take the element they want to enter and the index
    printf("Enter a element that you want to enter between(0 to %d): ", size - 1);
    scanf("%d", &newelement);
    printf("Enter the index you want: ");
    scanf("%d", &position);

    // condition for check if the grater then 0 and even
    if (position == 0 || position % 2 != 0)
    {
        printf("index should be greater then 0 and less then to size &&  must even!!!");
    }
    else
    {
        // for shifting element and insert on 1st index
        for (int i = size - 1; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[position] = newelement; // now put the element into empty space
        // now print the new array
        printf("New array after insert: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
