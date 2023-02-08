// Accessing memory addresses

#include <stdio.h>
#include <stdlib.h>

int main() {
    // values are stored in memory "boxes" (physical addresses)
    // variables helps us locate the memory address where the values are stored
    int age = 30;
    double gpa = 4.3;
    char grade = 'A';

    // printing the addresses
    // %p is used in this case -> known as pointer
    // & refers to the memory address
    printf("age: %p\n", &age);
    printf("gpa: %p\n", &gpa);
    printf("grade: %p\n", &grade);

    return 0;
}