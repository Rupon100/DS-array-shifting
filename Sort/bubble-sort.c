// Bubble sort
#include <stdio.h>

int main() {
    int arr[5] = {12, 5, 24, 8, 21};
    int n = 5;
    
    for(int i = 0; i < n-1; i++){
        // printf("%d ", arr[i]);
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // now print all
    printf("After sort: ");
    for(int i = 0; i < n-1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}



// for optimize bubble sort time
// // Bubble sort
// #include <stdio.h>

// int main() {
//     int arr[5] = {12, 5, 24, 8, 21};
//     int n = 5;
    
//     for(int i = 0; i < n-1; i++){
//         // there was a problem in this code when i = 1, then all array element are sorted. then it continously looop before match the consition that's why it takes more time. we can take a flag so that when array will sorted then we'll stop the loop.
//         int flag = 0;
//         for(int j = 0; j < n-1-i; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 flag = 1;
//             }
//         }
        
       
//          if(flag == 0) break;
//     }
   
//     // now print all
//     printf("After sort: ");
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

