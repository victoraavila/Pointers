#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Pointers and multi-dimensional arrays
    // A multi-dimensional array is always an array of arrays

    // The following matrix is a collection of two arrays with three integers each
    // All these integers are located inside a contiguous block of memory

    int B[2][3];

    // B returns a pointer to 1D array of three elements
    // B != *B = B[0] (although they return the same result)

    int (*p1)[3] = B;

    // Creating a 3-dimensional array
    // It's a collection of 2D arrays
    // It's also located in a contiguous block of memory
    // The C[0][0] 1D array goes first, then the C[0][1], then the C[1][0] array...

    int C[3][2][2];

    C[0][0][0] = 2; C[0][0][1] = 5;
    C[0][1][0] = 7; C[0][1][1] = 9;

    C[1][0][0] = 3; C[1][0][1] = 4;
    C[1][1][0] = 6; C[1][1][1] = 1;

    C[2][0][0] = 0; C[2][0][1] = 8;
    C[2][1][0] = 11; C[2][1][1] = 13;

    // C returns us a pointer to a 2D array of integers
    // The following is acceptable

    int (*p2)[2][2] = C;

    // Printing some info

    printf("The base address of the 3D array is %p. This one returns a pointer to the first 2D array.\n", C);
    printf("The base address of the first 1D array is %p (or %p) (or %p). All these return a pointer to the first 1D array.\n", *C, C[0], &C[0][0]);

    // C[i][j][k] = *(C[i][j] + k) = *(*(C[i] + j) + k) = *(*(*(C + i) + j) + k)
    
    // Some more info

    printf("\nThe second element of the second array of the first 2D matrix is %d (or %d).\n", *(C[0][1] + 1), C[0][1][1]);
    printf("The base address of the second array of the second 2D matrix is %p (or %p) (or %p)\n.", *(C[1] + 1), C[1][1], &C[1][1][0]);

    return 0;

}