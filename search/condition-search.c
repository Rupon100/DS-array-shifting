#include <stdio.h>

int main()
{
    int n, mid, size;
    printf("Enter the size: \n");
    scanf("%d", &size);

    printf("Enter numbers of elements: \n");
    scanf("%d", &n);

    int arr[size];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int initial = 0;
    // int end = n-1;
    // int key = 5;
    // while(end >= initial){
    //     int mid = (initial + end) / 2;
    //     if(arr[mid] == key){
    //         printf("%d id found at index %d", key, mid);
    //         break;
    //     }else if(key < arr[mid]){
    //         end = mid-1;
    //     }else{
    //         initial = mid+1;
    //     }
    // }

    int key = 5;

    if (n <= 10)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 5)
                printf("%d in the index: %d", key, i);
        }
    }
    else
    {
        int initial = 0;
        int end = n - 1;
        int key = 5;
        while (end >= initial)
        {
            int mid = (initial + end) / 2;
            if (arr[mid] == key)
            {
                printf("%d id found at index %d", key, mid);
                break;
            }
            else if (key < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                initial = mid + 1;
            }
        }
    }

    return 0;
}
