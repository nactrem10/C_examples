#include <stdio.h>

int main(){

    int array[20];

    int length = sizeof(array) / sizeof(array[0]);
    
    for (int i = 0; i < length; i++){
        
        array[i] = i;

        printf("The %d th elemenet of the array is %d\n", i, array[i]);
    }
    

    return 0;
}