#include <stdio.h>

// Creating the Person class
struct Person {
    int id;
    char *name;
    int age;
    struct Person *spouse;
} firstPerson, secondPerson;

int main(){
    
    firstPerson.id = 123;
    firstPerson.name = "Bob";
    firstPerson.age = 25;

    secondPerson.id = 132;
    secondPerson.name = "Alice";
    secondPerson.age = 25;
    secondPerson.spouse = &firstPerson;

    firstPerson.spouse = &secondPerson;

    // Printing first persons variables
    printf("Id: %d, Name: %s, Age: %d, Name of the spouse: %s\n\n", firstPerson.id, firstPerson.name, firstPerson.age, firstPerson.spouse->name);

    // Creating an array of persons and filling the array
    struct Person city[2];

    // city[0] = firstPerson;
    // city[1] = secondPerson;
    
    // Printing the array
    printf("City array; \n");
    
    for (int i = 0; i < sizeof(city) / sizeof(city[0]); i++) {

        printf("Id: %d, Name: %s, Age: %d, Name of the spouse: %s\n", city[i].id, city[i].name, city[i].age, city[i].spouse->name);
    }
    

    return 0;
}