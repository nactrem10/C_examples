#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declaring the array
    int array[5];

    // Finding length of an array
    int length = sizeof(array) / sizeof(array[0]);

    // Filling and printing addresses of an array at the same time 
    for (int i = 0; i < length; i++){
        
        array[i] = i;

        printf("The %d th elemenets address of the array is %p\n", i, &array[i]);
    }

    // Creating a null pointer
    int *p;

    // Declaring an integer and assigning null pointer to the integer
    int num = 5;
    p = &num;

    // Printing the pointer and the pointer of the number
    printf("The created pointer is: %p, the pointer of the declared integer is: %p\n", p, &num);

    // Creating a pointer for allocating memory
    int *ptr;

    // Allocating memmory with int variables and assigning to the pointer
    ptr = (int *)malloc(3 * sizeof(int));

    // Emptying values assigned to the pointer from memory
    free(ptr);

    return 0;
}