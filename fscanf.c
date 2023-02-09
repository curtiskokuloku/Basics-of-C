// Using fscanf()
// The call to fscanf reads two integers from the file "example.txt". 
// The return value of fscanf is stored in items_read, which is then checked 
// against the expected number of items (2). If the read was successful, 
// items_read will equal 2, otherwise an error message will be printed.

#include <stdio.h>

int main(void)
{
    int num1, num2;
    FILE *fptr;
    fptr = fopen("example.txt", "r"); // Open the file in read mode
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    int items_read = fscanf(fptr, "%d %d", &num1, &num2);
    if (items_read != 2)
    {
        printf("Error reading from file\n");
    }
    fclose(fptr); // Close the file

    printf("Read values: %d %d\n", num1, num2);
    return 0;
}
