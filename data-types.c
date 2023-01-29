// Data types we can use in our C program
// every variable must have a type of data it wants to store

#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 19;   // represents a whole number
    double gpa = 3.2; // represents a decimal number
    char grade = 'A'; // represents a single character; can only store one character

    // we can use the char data type to store strings, using an array
    // we cannot modify a char char array (string)
    char name[] = "Curtis Kokuloku";

    return 0;
}