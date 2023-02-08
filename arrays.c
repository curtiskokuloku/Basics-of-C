// Using arrays in C
// arrays are used as containers to store information
// inside an array, we can store 0 or thousands of information(elements)
// elements in an array much be the same type

#include <stdio.h>
#include <stdlib.h>

int main() {
    // creating an array is as simple as creating a normal variable
    int nums[] = {7, 4, 13, 14, 21, 28};
    printf("%d\n", nums[0]);       // accessing the first element

    // modifying the second element
    nums[1] = 200;
    printf("%d\n", nums[1]);

    // string array
    char phrase[20] = "Curtis";
    printf("%s", phrase);
    
    return 0;
}