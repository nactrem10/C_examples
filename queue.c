#include <stdio.h>
#include <stdlib.h>
#define MAX 10
 
 // Declaring queue and components
int QUEUE[MAX], front=-1, rear=-1;
 
 // Adding an element to the queue
void enqueue(int queue[], int element) {

    // Checking if the queue is empty if yes, adding element as first of queue
    if(rear == -1) {

        front = rear = 0;
        queue[rear] = element;
    }

    // Checking if the queue is full
    else if(rear == MAX-1) {

        printf("\nQUEUE is full.\n");
        return;
    }

    // Adding element to end of the queue
    else {

        rear++;
        queue[rear]=element;
    }

    printf("\nItem inserted..");
}

// Removing from the queue (first element)
void dequeue(int queue[]) {

    int element;

    // Checking if the queue is empty if yes do nothing
    if(front == -1) {

        printf("QUEUE is Empty.");
        return;
    }

    // Checking if queue only has one element
    else if(front==rear) {

        element = queue[front];
        front = rear = -1;
    }

    // Removing the first element of queue
    else {

        element = queue[front];
        front++;
    }

    //Displaying which element is removed
    printf("\nItem removed : %d.", element);
}
 
// Displaying the queue
void show(int queue[]) {

    // Checking if the queue is empty if yes displaying message that says queue is empty
    if(rear == -1) {
        printf("\nQUEUE is Empty.");
        return;
    }

    for(int i = front; i <= rear; i++) {

         printf("%d,",queue[i]); 
    }
}

int main() {

    int input,choice;

    while(1) {

        printf("QUEUE Elements are :");
        show(QUEUE);

        // User Menu
        printf("\n\nEnter choice (1:Insert,2:Display,3:Remove,0:Exit):");
        scanf("%d",&choice);

        switch(choice) {
            case 0:
                exit(1);
                break;
            case 1:
                printf("Enter an element to insert:");
                scanf("%d",&input);
                enqueue(QUEUE, input);
                break;
            case 2:
                show(QUEUE);
                break;
            case 3:
                dequeue(QUEUE);
                break;
            default:
                printf("\nInvalid choice\n");
                break;
        }
    
    }
    return 0;
}