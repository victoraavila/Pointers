#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Pointers and multi-dimensional arrays

    // When we create the following array, we store 5 integer elements in a contiguous block
    // Each integer has a size of 4 bytes
    // The name of the array itself returns a pointer to the first element of it (we can dereference too)

    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;

    // Printing all this information
    // *(A + i) = A[i]
    // (A + i) = &A[i]

    printf("The size of each integer element is %ld bytes.\n", sizeof(int));
    printf("The base address of the array is %p (or %p).\n", p, A);
    printf("The first element of the array is %d (or %d) (or %d).\n", A[0], *(A + 0), *(p + 0));
    printf("The third element of the array is %d (or %d) (or %d).\n", A[2], *(A + 2), *(p + 2));
    
    // Besides these characteristics, the array is not seen as a pointer variable
    // We CANNOT do A = p, only p = A

    // Creating a 2D integer array
    // It's an array of arrays
    // B[0] and B[1] are both 1D arrays of 3 integers each
    // B[0] comes first in the memory and it is 12 bytes long (3 * 4 bytes)

    int B[2][3];

    // The following would give a compilation error
    // B will return a pointer to a 1D array of 3 integers, not a pointer to an integer

    // int *p2 = B;

    // The following would be all right
    // It defines a pointer to a 1D array of 3 integers

    int (*p2)[3] = B;

    // Printing this information

    printf("\nThe address of the first array of the matrix is %p (or %p).\n", B, &B[0]);
    printf("The address of the first element of the first array of the matrix is %p (or %p) (or %p).\n", *B, B[0], &B[0][0]);


    return 0;

}