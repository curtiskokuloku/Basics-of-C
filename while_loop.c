// working with while loops

#include <stdio.h>
#include <stdlib.h>

int main() {

    int index = 1;
    while(index <= 5) {   // will run until condition is met
        printf("%d\n", index);
        index++;    // increments index by 1
    }

    // do-while-loop
    // executes a block of code before checking if the condition is met, then runs the while loop 
    do {
        printf("index is: %d\n", index);
        index++;
    } while (index < 10);

    return 0;
}