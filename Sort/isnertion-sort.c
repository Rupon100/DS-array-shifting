#include <stdio.h>

int main()
{
    int arr[10] = {23, 5, 89, 12, 7, 56, 34, 1, 45, 19};
    int n = 10;

    // insertion sort
    for (int i = 0; i < n; i++)
    {
        int sort = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > sort)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = sort;
    }

    printf("Sorted array :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}