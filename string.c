#include <stdio.h>
#include <string.h>

int main(){

    char input[100];
    
    printf("Enter a string: \n");
    scanf("%s", input);
    printf("Length of %s is: %ld\n",input, strlen(input));

    return 0;
}