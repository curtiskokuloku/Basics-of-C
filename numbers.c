// Working with numbers

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    printf("%f\n", 8.9); // %f allows us to print floating point numbers (decimals)
    printf("%f\n", 5.0 + 4.5); // output 9.50000
    

    int num = 6;
    printf("%d\n", num);    // %d allows us to print integers (whole numbers)

    // C has built-in functions that allows us to carry out certain operations
    printf("%f\n", pow(2, 3)); 
    printf("%f\n", sqrt(36));
    printf("%f\n", ceil(34.6665));  // ceil rounds up
    printf("%f\n", floor(4.8889)); // floor rounds down

    return 0;
}