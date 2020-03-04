#include <stdio.h>

int main(){

    // Declaring integers to use
    int array[20], first = 5, second = 2;;

    // Finding length of an array
    int length = sizeof(array) / sizeof(array[0]);

    // Filling and printing an array at the same time 
    for (int i = 0; i < length; i++){
        
        array[i] = i;

        printf("The %d th elemenet of the array is %d\n", i, array[i]);
    }

    // Printing two integers before swap
    printf("Before swap;\nFirst: %d, Second: %d\n", first, second);

    // Swapping the integers
    first = first + second;
    second = first - second;
    first = first - second;

    // Printing two integers after swap
    printf("After swap;\nFirst: %d, Second: %d\n", first, second);

    return 0;
}