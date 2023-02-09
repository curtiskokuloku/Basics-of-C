// using fprintf()
// The call to fprintf writes two integers to the file "example.txt".
// The return value of fprintf is stored in characters_written, 
// which is then checked to ensure that it's non-negative. 
// If the write was successful, characters_written will be positive, 
// otherwise an error message will be printed.

#include <stdio.h>

    int
    main(void)
{
    int num1 = 42, num2 = 123;
    FILE *fptr;
    fptr = fopen("example.txt", "w"); // Open the file in write mode
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    int characters_written = fprintf(fptr, "%d %d\n", num1, num2);
    if (characters_written < 0)
    {
        printf("Error writing to file\n");
    }
    fclose(fptr); // Close the file

    return 0;
}
