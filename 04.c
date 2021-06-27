#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // int = 4 bytes
    // char = 1 byte
    // float = 4 bytes (stored in a different way)

    // Pointer variables are strongly typed.
    // If you want a pointer to an integer, you must have an integer pointer
    // This is important because we can access and change the values of the addresses the
    // pointer points to.

    // The pointer points to the address of the first byte of the variable referenced.

    // Declaring an integer and a pointer to that integer
    
    int a = 1025;
    int *p;
    p = &a;

    // Printing some attributes
    // %li and %ld are used for printing signed long numbers

    printf("The size of an integer is %li bytes.\n", sizeof(int));
    printf("The address the pointer stores is %p, which has the value %d.\n", p, *p);
    printf("The address the pointer p + 1 stores is %p, which has the value %d (memory garbage).\n", p + 1, *(p + 1));

    // Creating a character pointer that points to the same address of int *p
    // We have got to typecast the integer pointer p to a char pointer

    char *p0;
    p0 = (char *) p;

    printf("\nThe size of a char is %li bytes.\n", sizeof(char));
    printf("The address the char pointer stores is %p, which has the value %d.\n", p0, *p0);
    printf("The address the char pointer p + 1 stores is %p, which has the value %d (next byte in the 4 bytes).\n", p0 + 1, *(p0 + 1));
    // 1025 = 00000000 00000000 00000100 00000001 (*p0 only reads the first byte)



    return 0;
}