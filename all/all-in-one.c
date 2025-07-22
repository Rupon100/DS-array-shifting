// // 2 no problem
// #include <stdio.h>
// int main() {
//     int size;
//     printf("Enter the array size: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     // take all elemeents dynamically
//     printf("Enter %d elements: ", size);
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]); // that will take elements every time
//     }
    
//     // now print all the elements
//     printf("Array elements are: ");
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }






// // even elements
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the array size: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     printf("Enter %d elements: ", size);
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
    
    
//     // now print even elements from the array
//     printf("even elements are: ");
//     for(int i = 0; i < size; i++){
//         if(arr[i]%2 == 0){
//             printf("%d ", arr[i]);
//         }  
//     }
    
//     return 0;
// }






// // print odd index element
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter the size: ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter %d array elemets: ");
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     // print odd elements
//     for(int i = 0; i < size; i++){
//       if(arr[i]%2 != 0){
//           printf("%d ", arr[i]);
//       }
//     }
//     return 0;
// }


// // print even index element
// #include<stdio.h>
// int main(){
//     int size;
//     printf("Enter array ssize: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     printf("Enter elements of array: ");
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     printf("Even indexd elements: ");
//     for(int i = 0; i < size; i++){
//         if(i%2 == 0){
//             printf("%d ", arr[i]);
//         }
//     }
    
//     return 0;
// }







// // insert element at last
// #include<stdio.h>
// int main(){
//     int size, newElement;
//     printf("Enter the size: ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter all elements: ");
//     for(int i = 0; i < size-1; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     // show the default array
//     printf("Default array: ");
//     for(int i = 0; i < size-1; i++){
//         printf("%d ", arr[i]);
//     }
    
//     printf("\n");
    
//     // take new element for last index position and put it there
//     printf("Enter a new element for last index: ");
//     scanf("%d", &newElement);
//     arr[size-1] = newElement;
    
//     printf("New array after isnerting at last: ");
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }







// // insert any element in any index
// #include<stdio.h>
// int main(){
//     int size, newElement, index;
//     printf("Enter the array size: ");
//     scanf("%d", &size);
//     int arr[size];
    
//     printf("Enter %d elements for the array: ", size-1);
//     for(int i = 0; i < size - 1; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     // take a input at what position he want to input and which value
//     printf("Enter the index where you want to put: ");
//     scanf("%d", &index);
    
//     // now take the element
//     printf("Enter the element: ");
//     scanf("%d", &newElement);
    
    
//     // make a space on target element
//     for(int i = size; i >= index; i--){
//         arr[i] = arr[i-1];
//     }
    
//     // now insert an element in empty index
//     arr[index] = newElement;
    
//     printf("\n");
    
//     // now print all elemats
//     printf("Update array: ");
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
    
    
    
//     return 0;
// }







// // insert into a even index expect 0
// #include<stdio.h>
// int main(){
//     int size, index, newElement;
//     printf("Enter the array size: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     printf("Enter %d elements: ", size-1);
//     for(int i = 0; i < size-1; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     // print normal array
//     printf("Default array: ");
//     for(int i = 0; i < size-1; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     while(1){
        
//     printf("Enter an even index expect 0: ");
//     scanf("%d", &index);
//     if(index <= 0 || index%2 != 0){
//         printf("Please enter a valid even index! \n");
//     }else {
//         break;
//     }
//     }
    
//     printf("Enter the element you want to set at index %d.", index);
//     scanf("%d", &newElement);
    
//     for(int i = size; i >= index; i--){
//         arr[i] = arr[i-1];
//     }
    
//     printf("\n");
    
//     arr[index] = newElement;
    
//     printf("New array after inserting: ");
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }









// // delete an element from any odd index position
// #include<stdio.h>
// int main(){
//     int size, index;
//     printf("Enter the array size: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     printf("Array elements: ");
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     while(1){
//         printf("Enter odd index u want to delete: ");
//         scanf("%d", &index);
//         if(index%2 == 0 || index <= 0){
//             printf("Please enter a odd index\n");
//         }else{
//             break;
//         }
//     }
    
//     printf("\n");
    
    
//     for(int i = index; i < size; i++){
//         arr[i] = arr[i+1];
//     }
    
//     size--;
    
//     printf("New array after delete: ");
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }







// // delete an element from any even index position
// #include<stdio.h>
// int main(){
//     int size, index;
//     printf("Enter the array size: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     printf("Array elements: ");
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
    
//     while(1){
//         printf("Enter Even index u want to delete: ");
//         scanf("%d", &index);
//         if(index%2 != 0 || index <= 0){
//             printf("Please enter a Even index\n");
//         }else{
//             break;
//         }
//     }
    
//     printf("\n");
    
    
//     for(int i = index; i < size; i++){
//         arr[i] = arr[i+1];
//     }
    
//     size--;
    
//     printf("New array after delete: ");
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }

 




// // find any value using linear search
// #include<stdio.h>
// int main(){
//     int arr[50] = {
//         11, 12, 13, 21, 21, 21, 22, 22, 23, 24,
//         28, 32, 33, 34, 35, 43, 44, 45, 46, 47,
//         48, 49, 50, 54, 55, 56, 57, 65, 66, 67,
//         68, 69, 70, 71, 72, 72, 77, 78, 79, 80,
//         81, 82, 83, 87, 88, 89, 90, 91, 98, 99
//     };
    
//     int initial = 0;
//     int end = 49;
//     int mid;
//     int count = 0;
//     int key = 72;
    
//     while(initial <= end){
//         mid = (initial + end) / 2;
//         if(arr[mid] == key){
//             count = 1;
            
//             // for left side
//             int i = mid - 1;
//             while(i >= 0 && arr[i] == key){
//                 count++;
//                 i--;
//             }
            
//             // for right side
//             i = mid + 1;
//             while(i <= end && arr[i] == key){
//                 count++;
//                 i++;
//             }
            
//             break;
            
//         }else if(arr[mid] > key){
//             end = mid - 1;
//         }else {
//             initial = mid + 1;
//         }
//     }
    
//     printf("The %d has %d times here: ", key, count);
    
//     return 0;
// }














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



