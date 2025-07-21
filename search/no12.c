/*
   Declare an Array, take Size, Elements dynamically. 
   1. Delete 2 even elements from the last position. 
   2. If the array has only 1 even element, insert 2 elements in the middle & the very next index. 
   3. If there is no even element, then delete the middle indexed element
   and insert a new element to the very next index of the middle
   index. 
   [Take elements for insertion dynamically]. Count odd and even
   elements in the array to solve the problem.
*/
#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    // declear arrray size
    int arr[size];
    
    // take array elements
    printf("Enter elements: \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    // even counts and odd couts
    int evenCount = 0;
    int oddCount = 0;
    for(int i = 0; i < size; i++){
        if(arr[i]%2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    
    printf("Even: %d, \n Odd: %d \n", evenCount, oddCount);
    
    if(evenCount >= 2) {
        int deletedCount = 0;
        
        for(int i = size - 1; i >= 0 && deletedCount < 2; i--){
            if(arr[i]%2 == 0){
                 // count from last how many index we want to delete
                printf("Even deleted: %d", deletedCount);
                
                // now delete 2 element
                for(int k = i; k < size; k++){
                    arr[k] = arr[k+1];
                }
                size--;
                deletedCount++;
            }
        }
        
        printf("Updated Array: ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
        
    }else if(evenCount == 1){
        // take 2 element input
        int mid = size / 2;
        int newTwoArray[2];
        int midn = 99;
        int midNext = 100;
        // inset now
        for(int i = mid; i < size-1; i++){
            arr[i+2] = arr[i];
        }
        
        arr[mid] = midn;
        arr[mid+1] = midNext;
        
        // print all the element now
        printf("New Array: ");
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }
        
    }else{
        // enter one element in mid index next index
        printf("\n");
        printf("all odd element \n");
        int mid = (0 + size-1) / 2;
        
        printf("Mid index: %d, and element: %d\n", mid, arr[mid]);
        
        // now delete the mid index >>> 
        for(int i = mid; i < size-1; i++){
             arr[i] = arr[i+1];
        }
        size--;
        
        //insert a new element to very next index
        int newElement;
        printf("Enter a new element: ");
        scanf("%d", &newElement);
        
        for(int i = size-1; i >= mid+1; i--){
            arr[i+1] = arr[i];
        }
        
        arr[mid] = newElement;
        size++;
        
        // Now the new array
        printf("\n");
        printf("Array After function: ---------------\n");
        for(int i = 0; i < size-1; i++){
            printf("%d ", arr[i]);
        }
    }
    
    
    return 0;
}
