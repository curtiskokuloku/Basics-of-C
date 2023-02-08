// using nest loops and two dimensional arrays

#include <stdio.h>
#include <stdlib.h>

int main() {

    // two dimensional arrays are like matrices
    // first bracket gives us the rows and second bracket gives the columns
    // recall that elements in an array are of the same type
    // elements in a two dimensional array are arrays
    int nums[3][2] = {{1, 2}, 
                    {3, 4}, 
                    {5, 6}
                    }; // 3 rows and 2 columns (3 arrays with 2 elements each)

    printf("first row and first column is: %d\n", nums[0][0]);

    // nested for loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}