// Introducing variables
// variables can be modified
// variables allow us to store in data 

#include <stdio.h>

int main() {
    // character array that allows us to store a sequence of characters
    char characterName[] = "John"; 
    
    // integer representing the character's age
    int characterAge = 35;

    // printing using printf()
    printf("There once was a man names %s\n", characterName);
        // %s is a placeholder for the variable characterName
        // tells C to replace %s by the striing characters

    printf("He was %d years old.\n", characterAge);
        // %d is a placeholder for the variable characterAge
        // $d is used for integers

    // modifying variables
    characterAge = 30;


    printf("He likes Tom who is %d years old.\n", characterAge);
    
    return 0;
}