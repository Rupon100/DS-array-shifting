#include<stdio.h>
int main(){
     int arr[6] = {1, 2, 3, 4, 5};
     int arr_size = 5;
     int arr_capacity = 6;
     if(arr_size >= arr_capacity){
         printf("There is no space in the array!");
     }
     
     // back once element in the 1 index
     for(int i = 5; i >= 1; i--){
         arr[i] = arr[i-1];
     }
     //now put the value in the empty index
     arr[1] = 99;
     arr_size++;
     
     //print now
     for(int i = 0; i < arr_size; i++){
         printf("%d \n", arr[i]);
     }
    
    
    return 0;
}