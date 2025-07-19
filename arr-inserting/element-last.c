/*
  Declare an Array, take Size, Elements dynamically. Insert an
  element in the last index. [Take the elements dynamically]
*/
#include <stdio.h>

int main() {
    int size, last;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];

    // take elements dynamically
    printf("Enter array elements: \n");
    for(int i = 0; i < size-1; i ++){
        scanf("%d", &arr[i]);
    }
    // entererd elements array are
    printf("Entered array: ");
    for(int i = 0; i < size-1; i++){
        printf("%d ", arr[i]);
    }
    
    // now take the new last element index
    printf("\n"); // for create a new line
    printf("Enter the last element of array: ");
    scanf("%d", &last);
    
    arr[size-1] = last; // we put the element at last of the array
    
    printf("\n"); // for new line
     
    printf("Array after enter at last index: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}