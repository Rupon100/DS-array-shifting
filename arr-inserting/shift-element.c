#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4};
    
    // for print initial array elements
    printf("Array elements: \n");
    for(int i = 0; i < 4; i++){ // here the size 4.(means loop through the 4 elements)
        printf("%d ", arr[i]);
    }
    
    // now shift elements to make a space for new element at index 4
    for(int i = 4; i >=1; i--){ // the loop start from 3 and goes to index 1
        arr[i] = arr[i-1];  
    }
    /*
    array shifting function: 
    arr[4] = arr[4-1]; (shift the 3rd index element to 4th index)
    arr[3] = arr[3-1]; (shift the 2rd index element to 3th index)
    arr[2] = arr[2-1]; (shift the 1rd index element to 2th index)
    **now the 1st index is empty example, Array: 1 _ 2 3 4 
    */

    arr[1] = 8; // now insert a element into the 1st empty index
    
    // print the new array after shifting and inserting
    printf("New array elements: \n");
    for(int i = 0; i < 5; i++){ // now size is 5 because we insert 8 into 1st index
        printf("%d ", arr[i]);
    }

    // now the result
    // New array elements: 1 8 2 3 4
    

    return 0;
}

/*
 
  // Declare an Array, take Size, Elements dynamically. Insert an
   // element at any position of the array. [Take the elements & position dynamically]
 
#include<stdio.h>
int main() {
    int size, newelement, position;
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
    
    // for new line
    printf("\n");
    
    // take the element they want to enter and the index
    printf("Enter a element that you want to enter between(0 to %d): ", size-1);
    scanf("%d", &newelement);
    printf("Enter the index you want: ");
    scanf("%d", &position);
    
    
    // for shifting element and insert on 1st index
    for(int i = size-1; i >= position;i--){
        arr[i] = arr[i-1] ;
    }
    
    arr[position] = newelement;
    
    // now print the new array
    printf("New array after insert: ");
    for(int i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}



*/
