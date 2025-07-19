/*
2. Declare an Array, take Size, Elements dynamically. Then print
   Even elements from the Array.
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    int arr[size];

    // take elements dynamically
    printf("Enter array elements: \n");
    for(int i = 0; i < size; i ++){
        scanf("%d", &arr[i]);
    }

    // now print even elements from the array
    for(int i = 0; i < size; i++){
        if(arr[i]%2 == 0){ // check if the element are divisible by 2
            printf("%d ", arr[i]);
        }else{
            continue; // if not then skip the element
        }
    }

    return 0;
}