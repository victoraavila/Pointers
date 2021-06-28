#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Pointers to pointers
    // Pointers to integers are stored using 8 bytes

    // Changing the value of the integer using dereferencing

    int a = 5;
    int *p; // Pointer to value (one asterisk)
    p = &a;
    *p = 6;

    printf("The size of this integer pointer is %li bytes.\n", sizeof(p));
    printf("The value of the integer now is %d.\n", a);

    // Creating a pointer to the pointer, which will store the address of the first pointer
    // An int ** can ONLY store the address of an int * (pointer to integer)

    int **q; // Pointer to another pointer (two asterisks)
    q = &p;

    printf("\nThe address of the pointer to integer is %p.\n", &p);
    printf("The value the pointer to pointer to integer stores is %p.\n", q);

    // Creating a pointer to the pointer to the pointer, which will store the address of the second pointer
    // An int *** can ONLY store the address of an int ** (pointer to pointer to integer)

    int ***r;
    r = &q;

    printf("\nThe address of the pointer to pointer to integer is %p.\n", &q);
    printf("The value the pointer to pointer to pointer to integer stores is %p.\n", r);

    // DEREFERENCING: getting the value stored in 'a' using the three pointers

    printf("\nDereferencing using the pointer to int: %d.\n", *p);
    printf("Dereferencing using the pointer to pointer to int: %d.\n", *(*q));
    printf("Dereferencing using the pointer to pointer to pointer to int: %d.\n", *(*(*r)));

    // DEREFERENCING: changing the value of 'a' using the third pointer

    *(*(*r)) = 10;

    printf("\nThe value of the integer now is %d.\n", a);

    *(*q) = *p + 2;

    printf("\nThe value of the integer now is %d.\n", a);

    return 0;
}