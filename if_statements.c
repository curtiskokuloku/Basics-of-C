// Writing if-else statements

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) { 
    // finding the maximum value of a and b
    int result;
    if (a > b) {
        result = a;
    } else {
        result = b;
    }
    return result;
}

int max3(int a, int b, int c) {
    int result;
    
    // uses logical operator && to specify multiple conditions
    if (a >= b && a >= c) {
        result = a;
    } else if (b >= a && b >= c) {
        result = b;
    } else {
        result = c;
    }
    return result;
}

int main() {
    int num1 = 6;
    int num2 = 10;
    int max_num = max(num1, num2);
    printf("%d\n", max_num);

    int num3 = 81;
    int max_num3 = max3(num1, num2, num3);
    printf("%d\n", max_num3);

    return 0;
}