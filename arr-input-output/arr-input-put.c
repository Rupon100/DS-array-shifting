/*
2. Print an Array of 10 Elements; take inputs of the Size and
   Element dynamically (take the size and elements different)
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size); // input of array size
    int arr[size];

    // get input of array elements
    printf("Enter element one by one: \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\n"); // this is for create a new line

    // now print the all array elements
    printf("Elements are: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}