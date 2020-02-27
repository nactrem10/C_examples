#include <stdio.h>

int main(){

    // Declaring integers to use
    int array[20];

    // Finding length of an array
    int length = sizeof(array) / sizeof(array[0]);

    // Filling and printing an array at the same time 
    for (int i = 0; i < length; i++){
        
        array[i] = i;

        printf("The %d th elemenet of the array is %d\n", i, array[i]);
    }

    return 0;
}