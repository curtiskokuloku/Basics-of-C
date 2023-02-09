// using fread()
// The call to fread reads an int from the file "example.bin". 
// The return value of fread is stored in elements_read, which is then checked 
// against the expected number of elements (1). If the read was successful, 
// elements_read will equal 1, otherwise an error message will be printed.

#include <stdio.h>

int main(void)
{
    int num;
    FILE *fptr;
    fptr = fopen("example.bin", "rb"); // Open the file in binary read mode
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    size_t elements_read = fread(&num, sizeof(int), 1, fptr);
    if (elements_read != 1)
    {
        printf("Error reading from file\n");
    }
    fclose(fptr); // Close the file

    printf("Read value: %d\n", num);
    return 0;
}
