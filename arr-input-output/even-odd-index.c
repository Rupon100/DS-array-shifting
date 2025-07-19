/*
  Declare an Array, take Size, Elements dynamically. Then print
  Even indexed elements from the Array.
*/
#include <stdio.h>
int main() {
    int size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    int arr[size];

    // take elements dynamically
    printf("Enter array elements: \n");
    for(int i = 0; i < size; i ++){
        scanf("%d", &arr[i]);
    }

    // print even indexed
    for(int i = 0; i < size; i++){
        if(i%2 == 0){ // check if the index is even
            printf("i: %d -- value: %d \n", i, arr[i]);
        }else{
            continue;
        }
    }

    return 0;
}