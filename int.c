#include <stdio.h>


// Method for calculating avarage of two integers
int calculateAvarage(int a, int b) {

    return ((a+b) / 2);
}

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

    // Getting two numbers from user for calculating avarage
    printf("Enter first number to calculate avarage: \n");
    scanf("%d", &first);

    printf("Enter second number to calculate avarage: \n");
    scanf("%d", &second);

    // Printing the avarage of inputs
    printf("The avarage of %d and %d is: %d\n", first, second, calculateAvarage(first, second));

    return 0;
}