// Structs are data structures where we can store multiple data types

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct to represent a student
// struct's names are capitalized
// attributes of students are in the curly brackets
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {
    // creating an instance of Student struct
    struct Student stud1;

    // assigning attributes of students
    stud1.age = 19;
    stud1.gpa = 3.2;

    // for arrays, we want to copy using strcpy()
    strcpy(stud1.name, "Curtis");
    strcpy(stud1.major, "Computer Science");

    // printing student's attributes
    printf("Student's name: %s\n", stud1.name);
    printf("Student's major: %s\n", stud1.major);
    printf("Student's age: %d\n", stud1.age);
    printf("Student's gpa: %.2f\n", stud1.gpa);

    return 0;
}