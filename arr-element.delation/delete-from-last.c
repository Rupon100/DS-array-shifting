/*
   Declare an Array, take Size, Elements dynamically. Delete an
   element from the last position. [Take the position
   dynamically]
*/
#include<stdio.h>
int main() {
    int size, newelement, position;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];

    // take elements dynamically
    printf("Enter array elements: \n");
    for(int i = 0; i < size; i ++){
        scanf("%d", &arr[i]);
    }
    size--; // just decrease the size of the array
    // entererd elements array are
    printf("Entered array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}