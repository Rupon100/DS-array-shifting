
#include<stdio.h>
int main(){
    int arr[50] = {
        11, 12, 13, 21, 21, 21, 22, 22, 23, 24, 25, 26, 27,
        28, 32, 33, 34, 35, 43, 44, 45, 46, 47,
        48, 49, 50, 54, 55, 56, 57, 65, 66, 67,
        68, 69, 70, 71, 72, 76, 77, 78, 79, 80,
        81, 82, 83, 87, 88, 89, 90, 91, 98, 99
    };
    int initial = 0;
    int end = 49;
    int count = 0;
    int target; // we will find thid from array
    
    printf("Enter a find that you want to find: ");
    scanf("%d", &target);
    
    printf("\n");
    
    while(initial <= end){
        int mid = initial + end / 2; // this is mid value
        if(arr[mid] == target){
            printf("Target value %d is founded: ", target);
            count++;
            
            // now search for 0 to mid-1 (for count)
            int i = mid - 1;
            while(i >= 0 && arr[i] == target){
                count++;
                i--;
            }
            
            // now search for mid+1 to end
            i = mid + 1;
            while(i <= end && arr[i] == target){
                count++;
                i++;
            }
            
            printf("\n");
            
            printf(" %d - count - %d times.\n", target, count);
            
            break;
        }else if(arr[mid] < target){
            // printf("%d is greater than %d, so search right side\n", target, arr[mid]);
            initial = mid + 1;
        }
        else{
            // printf("%d is less than %d, so search left side\n", target, arr[mid]);
            end = mid - 1;
        }
    } 
    
  
    return 0;
}



// #include <stdio.h>

// // Function to count occurrences of key using binary search
// int countOccurrences(int arr[], int size, int key) {
//     int initial = 0;
//     int end = size - 1;
//     int count = 0;
//     int mid;

//     while (initial <= end) {
//         mid = (initial + end) / 2;

//         if (arr[mid] == key) {
//             count = 1;

//             // Check to the right
//             int i = mid + 1;
//             while (i < size && arr[i] == key) {
//                 count++;
//                 i++;
//             }

//             // Check to the left
//             i = mid - 1;
//             while (i >= 0 && arr[i] == key) {
//                 count++;
//                 i--;
//             }

//             break;
//         } else if (arr[mid] < key) {
//             initial = mid + 1;
//         } else {
//             end = mid - 1;
//         }
//     }

//     return count;
// }

// int main() {
//     int arr[20] = {1, 2, 3, 4, 5, 6, 7, 7, 7, 10, 11, 11, 11, 11, 15, 16, 17, 18, 19, 20};
//     int key = 7;

//     int count = countOccurrences(arr, 20, key);

//     if (count > 0)
//         printf("%d is %d times here\n", key, count);
//     else
//         printf("%d is not in the array\n", key);

//     return 0;
// }
