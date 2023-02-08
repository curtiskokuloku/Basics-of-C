// A basic calculator
// implements getting a number as input from user

#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1); // we use & for inouts that are not a string or characters

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f\n", num1 + num2);

    return 0;
}