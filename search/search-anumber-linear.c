
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
        int mid = initial + end; // this is mid value
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

