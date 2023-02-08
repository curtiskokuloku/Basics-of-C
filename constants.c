// Constants are special vriables that cannot be modified

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = 5;
    printf("%d\n", num);

    // modifying num
    num = 8;
    printf("%d\n", num);

    // declaring num as a constant so that it cant be modified
    // modifying a constant will give an error
    // num = num - 1

    // in most cases, constants should be all capital letters
    const int NUM = 7;
    printf("%d\n", NUM);

    return 0;
}