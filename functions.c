// Creating and using funcitons
// Functions are a collection of code to perform a specific task

#include <stdio.h>
#include <stdlib.h>

void sayHi();   // you must declare the function prior to the main so that C knows it exits
void print_name(char *name); // prints the name of user; name is a pointer to a string
void print_age(int age); // prints the age of user

int main() {    // this is the main function; required for every C program

    // calling the sayHi() function
    sayHi();

    // calling the print_name() function
    char name[28] = "Curtis";
    print_name(name);

    int age = 19;
    print_age(age);

    return 0;
}

// functions declaration begins with the return type
// void means that the function does nothing
void sayHi() {
    printf("Hello User\n");
}

// some functions takes in input arguments (parameters)
void print_name(char *name) {
    printf("%s\n", name);
}

void print_age(int age) {
    printf("%d\n", age);
}