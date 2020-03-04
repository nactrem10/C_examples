#include <stdio.h>

// Method for calculating avarage of two integers
int calculateAvarage(int a, int b) {

    return ((a+b) / 2);
}

// Method for checking if array has negative value
int hasNegative (int array[], int length) {

    for (int i = 0; i < length; i++) {
        
        if (array[i] < 0) {

            return 1;
        }
    }
    
    return 0;
}

int main(){

    // Declaring integers to use
    int array[20], secondAray[5] = {1, 2, 3, -2, -5}, first = 5, second = 2;
    

    // Filling and printing an array at the same time 
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        
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

    // Getting two numbers from user for calculating avarage
    printf("Enter first number to calculate avarage: \n");
    scanf("%d", &first);

    printf("Enter second number to calculate avarage: \n");
    scanf("%d", &second);

    // Printing the avarage of inputs
    printf("The avarage of %d and %d is: %d\n", first, second, calculateAvarage(first, second));

    // Printing that if the array has a negative value
    if(hasNegative(secondAray, (sizeof(secondAray) / sizeof(secondAray[0])))) {

        printf("The array has a negative value.\n");
    } else {

        printf("The array doesn't have a negative value.\n");
    }

    return 0;
}