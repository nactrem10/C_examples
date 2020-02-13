#include <stdio.h>
#include <string.h>

int main(){

    // Declaring strings to use
    char input[100], toReverse[100], reversed[100];
    
    // Finding length of a string
    printf("Enter a string: \n");
    scanf("%s", input);
    printf("Length of %s is: %ld\n", input, strlen(input));

    // Reversing a string
    printf("Input a string to reverse: \n");
    scanf("%s", toReverse);

    int begin = 0, end = strlen(toReverse) -1;

    for (begin = 0; begin < strlen(toReverse); begin++) {

        reversed[begin] = toReverse[end];
        end--;
    }

    reversed[begin] = '\0';

    printf("Reverse of %s is: %s\n", toReverse, reversed);

    return 0;
}