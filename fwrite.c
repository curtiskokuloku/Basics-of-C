// Using fwrite()
// The call to fwrite writes the value of num to the file "example.bin". 
// The return value of fwrite is stored in elements_written, which is then 
// checked against the expected number of elements (1). 
// If the write was successful, elements_written will equal 1, 
// otherwise an error message will be printed.

#include <stdio.h>

int main(void)
{
    int num = 42;
    FILE *fptr;
    fptr = fopen("example.bin", "wb"); // Open the file in binary write mode
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    size_t elements_written = fwrite(&num, sizeof(int), 1, fptr);
    if (elements_written != 1)
    {
        printf("Error writing to file\n");
    }
    fclose(fptr); // Close the file

    return 0;
}
