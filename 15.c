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
    // It defines a pointer to a 1D array of 3 integers (the first one of the matrix)

    int (*p2)[3] = B;

    // Printing this information

    printf("\nThe address of the first array of the matrix is %p (or %p).\n", B, &B[0]);
    printf("The address of the first element of the first array of the matrix is %p (or %p) (or %p).\n", *B, B[0], &B[0][0]);

    // Filling in some values

    B[0][0] = 2; B[0][1] = 3; B[0][2] = 6;
    B[1][0] = 4; B[1][1] = 5; B[1][2] = 8;

    // In a 2D array, the address of a block (a row) is the first byte in the block
    // In this case, the base address of the second array is 12 bytes after the first array (4 bytes x 3 int)
    // *(B + 1) is a pointer to the first integer in the second block

    printf("\nThe address of the second array of the matrix is %p (or %p).\n", B + 1, &B[1]);
    printf("\nThe next ones return pointers to integer:\n");
    printf("The address of the first element of the second array of the matrix is %p (or %p) (or %p).\n", *(B + 1), B[1], &B[1][0]);
    printf("The address of the third element of the second array of the matrix is %p (or %p) (or %p).\n", *(B + 1) + 2, B[1] + 2, &B[1][2]);

    // Printing some integer values
    // *B = B[0]
    // *B + 1 = &B[0][1]

    printf("\nThe second element of the array is %d.\n", *(*B + 1));

    // Some equivalencies
    // B[i][j] = *(B[i] + j) = *(*(B + i) + j)
    // B[i] returns a pointer to the first integer in the B[i] 1D array

    // Printing all elements of this matrix

    printf("\nThe B matrix has %ld elements and %ld columns.\n", sizeof(B)/sizeof(int), sizeof(B[0])/sizeof(int));
    printf("Therefore, we conclude that the B matrix has %ld rows.\n", (sizeof(B)/sizeof(int)) / (sizeof(B[0])/sizeof(int)) );

    printf("\n===== PRINTING ALL MATRIX ELEMENTS =====\n");
    for (int i = 0; i < (sizeof(B)/sizeof(int)) / (sizeof(B[0])/sizeof(int)); i++){
        
        for (int j = 0; j < sizeof(B[0])/sizeof(int); j++){

            printf("B[%d][%d] = %d (or %d) (or %d).\n", i, j, B[i][j], *(B[i] + j), *(*(B + i) + j));

        }

    }

    return 0;

}