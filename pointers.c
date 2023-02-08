// Pointers are another data type that are basically memory addresses
// refereced to the physical address that stores data in our computers
// pointers points to the physical address

#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    printf("age's memory address is %p\n", &age); // age is a pointer

    // new pointer
    // pointers are preceeded by *
    int *p_age = &age; // stores the memory address of age
    printf("address of p_age is %p\n", p_age);

    // to dereference the pointer (extract the value at the address)
    int value = *p_age; // stores the value of age in value
    printf("value is %d\n", value);

    return 0;
}