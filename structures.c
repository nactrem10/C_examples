#include <stdio.h>

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
    printf("Id: %d, Name: %s, Age: %d, Name of the spouse: %s\n", firstPerson.id, firstPerson.name, firstPerson.age, firstPerson.spouse->name);

    return 0;
}