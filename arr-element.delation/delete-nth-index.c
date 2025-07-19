/*
   Declare an Array, take Size, Elements dynamically. Delete an
   element in any of the Odd index position. [Take the position
    dynamically]
*/
#include<stdio.h>
int main() {
    int size, index;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];

    // take elements dynamically
    printf("Enter array elements: \n");
    for(int i = 0; i < size; i ++){
        scanf("%d", &arr[i]);
    }
    
    // entererd elements array are
    printf("Entered array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    // take odd index
    printf("Enter a Odd index number for delete: ");
    scanf("%d", &index);
    
    printf("\n");
    
    if(index%2 != 0){
        for(int i = index; i < size-1; i++){
            arr[i] = arr[i+1];
        }
        for(int i = 0; i < size-1; i++){
            printf("%d ", arr[i]);
        }
    }else{
        printf("Odd index deleted only possible!!!");
    }
    

    return 0;
}

