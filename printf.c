// Using the printf() function

#include <stdio.h>

int main() {

    // we use printf() to print stuff onto the screen
    // the screen is used as the standard output
    // printf() exists in the "stdio.h" header file
    printf("Hello, world!\n");
    
    // we can use the format specifier to print a tyoe of data
    // that is not just plan texts
    // format specifier beings with %
    int num = 45;
    printf("number is: %d\n", num);

    // or
    printf("%d\n", 500);

    // or
    printf("My favorite number is %d\n", 7);

    // using multiple format specifiers
    printf("The number %d is not %s\n", 100, "prime number.");

    printf("The number %f is a decimal number\n", 3.14158);

    char letter = 'C';
    printf("The first letter of my name is %c\n", letter);

    return 0;
}