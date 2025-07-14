// shifting in js
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

//another example here
// #include<stdio.h>
// int main(){
//     int arr[3] = {1,2};
    
    
//     for(int i = 2; i >= 2; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[1] = 8;
    
//     printf("Output are: ____________\n");
//     for(int i = 0; i <= 2; i++){
//         printf("%d \n", arr[i]);
//     }
    
//     return 0;
// }


// for deletion of a element from an array using left shift
// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     // for left shift deletion
//     for(int i = 1; i < 5-1; i++){
//         arr[i] = arr[i+1];
//     }
    
//     for (int i = 0; i < 4; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }


 