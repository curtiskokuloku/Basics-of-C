// working with for loops
// for loops allow us to use indexing variables

#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; i <= 5; i++) {
        // i is the index; tells us what iteration we're on
        // will run until condition (i <= 5) is met
        printf("i: %d\n", i);
    }
    printf("Done\n");

    // using forloop to count down from 10
    for (int i = 10; i > 0; i--) {
        printf("%d ", i);
    }
    printf("GO!\n");
    return 0;
}