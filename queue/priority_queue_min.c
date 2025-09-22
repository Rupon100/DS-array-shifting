// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 5

// int queue[MAX];
// int front = -1, rear = -1;

// // Insert element by priority (smaller = higher priority)
// void insert(int element)
// {
//     if (rear == MAX - 1)
//     {
//         printf("\nQueue Overflow!\n");
//         return;
//     }

//     // First element
//     if (front == -1 && rear == -1)
//     {
//         front = rear = 0;
//         queue[rear] = element;
//         return;
//     }

//     // Find correct position (smaller numbers go to front)
//     int i;
//     for (i = rear; i >= front; i--)
//     {
//         if (element < queue[i])
//         { // shift larger elements right
//             queue[i + 1] = queue[i];
//         }
//         else
//         {
//             break;
//         }
//     }

//     queue[i + 1] = element;
//     rear++;
// }

// // Delete (remove highest priority = smallest number at front)
// void delete()
// {
//     if (front == -1)
//     {
//         printf("\nQueue is empty!\n");
//         return;
//     }

//     printf("\nDeleted: %d\n", queue[front]);

//     // If only one element
//     if (front == rear)
//     {
//         front = rear = -1;
//     }
//     else
//     {
//         front++;
//     }
// }

// // Display queue
// void display()
// {
//     if (front == -1)
//     {
//         printf("\nQueue is empty!\n");
//         return;
//     }

//     printf("\nCurrent queue (min priority): ");
//     for (int i = front; i <= rear; i++)
//     {
//         printf("%d ", queue[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int ch, element;

//     printf("1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n");

//     while (1)
//     {
//         printf("\nEnter option: ");
//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             printf("Enter element: ");
//             scanf("%d", &element);
//             insert(element);
//             break;

//         case 2:
//             delete();
//             break;

//         case 3:
//             display();
//             break;

//         case 4:
//             exit(0);

//         default:
//             printf("Wrong option!\n");
//         }
//     }

//     return 0;
// }


// priority queue -> + linked list -> stack linked list -> singly + double
#include<stdio.h>
#include<stdlib.h>

#define max 5
int values[max];
int priority[max];
int front = -1;
int rear = -1;
// lower number higher priority

// enqueue base on priority
void enqueue(int value, int pri){
    if(rear == max-1){
        printf("\nFull!");
        return;
    }
    
    if(front == -1 && rear == -1){
        rear = front = 0;
        values[rear] = value;
        priority[rear] = pri;
    }else{
        int i = rear;
        // shift for insert by priority
        while(i >= front && pri < priority[i]){
            values[i+1] = values[i];
            priority[i+1] = priority[i];
            i--;
        }
        values[i+1] = value;
        priority[i+1] = pri;
        
        rear++;
    }
    
}


// Dequeue (remove highest priority = smallest number)
void dequeue(){
    if(front == -1 && rear == -1){
        printf("\nEmpty!");
        return;
    }
    
    printf("\nRemoved %d with priotity %d", values[front], priority[front]);
    
    if(front == rear){
        front = rear = -1;
    }else{
        front++;
    }
    
}

// peek lower number means higher peiority
// just picked values[front], priotiry[front]

// display base on priority
void display(){
    if(front == -1 && rear == -1){
        printf("\nEmpty");
        return;
    }
    printf("\nPrioroty Queue: ");
    for(int i = front; i <= rear; i++){
        printf("[%d, p-%d] ", values[i], priority[i]);
    }
    
}

int main(){
    
    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);
    display();

    dequeue();
    display();

    
    return 0;
}