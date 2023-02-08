// Getting user input

#include <stdio.h>
#include <stdlib.h>

int main() {
    // getting an integer
    int age;
    printf("Enter your age: "); // printf() is used to print something unto the screen
    scanf("%d", &age);      // allows user to input something into the program
                            // & indicates that the variable is a pointer to an address
    printf("You aree %d years old.\n", age);

    // getting a double
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is: %f\n", gpa);

    // getting a character
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is: %c\n", grade);

    // getting a string (sequence of characters)
    char name[28];  // tells C to allocate memory of 20 characters long to store the name
    printf("Enter your name: ")
    scanf("%s", name);      // name is already a pointer to the character array
                            // note that the scanf only graps the characters up to the first space
                            // '/0' represents a null/empty character
    printf("My name is also %s\n", name);

    // we can use fgets() to grap a whole line of text but stores it in a string of charcaters only
    char name2[28];
    fgets(name2, 28, stdin);    // 28 represents the "buffer" of how many characters the user can input
                                // stdin represents the "standard input", where we want to get the input from
    printf("%s That is a cool name too!", name2); 
    // note that fgets() prints a new line after the input
    
    return 0;
}