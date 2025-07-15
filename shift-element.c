#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4};
    
    // for normally print
    printf("Array elements: \n");
    for(int i = 0; i < 4; i++){
        printf("%d ", arr[i]);
    }
    
    // now shifting the array for no1 index arr[1]
    for(int i = 4; i >=1; i--){
        arr[i] = arr[i-1];
    }
    arr[1] = 8;
    
    // print the new array after shifting one value
    printf("after shifting array elements: \n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}