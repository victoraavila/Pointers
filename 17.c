#include <stdlib.h>
#include <stdio.h>

// Passing multi-dimensional arrays as function arguments

// Passing 2D matrix as parameter
// Only the first dimension of the array might be empty
// In this case, only collections of arrays of three integers will be allowed

void func2d(int (*A)[3], int B[][3]){
}

// Passing 3D matrix as parameter
// int (*C)[2][2] = int C[][2][2] (Arrays are always called by reference)
// int ***C does NOT work

void print3d(int (*C)[2][2]){
    
    printf("\nAll elements in this 3D array are:\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++){
                printf("Element C[%d][%d][%d] = %d\n", i, j, k, *(*(*(C + i) + j) + k));
            }
        }
    }

}

int main(int argc, char *argv[]){

    // Rewriting the previous code, now following the video
    // C has three 2x2 matrices

    int C[3][2][2] = { { {2, 5},
                         {7, 9} },

                       { {3, 4},
                         {6, 1} },

                       { {0, 8},
                         {11, 13}}
    };

    // Printing some info

    printf("All these are pointers: %p (and %p) (and %p) (and %p).\n", C, *C, C[0], &C[0][0]);
    printf("\nThe second element overall (C[0][0][1]) is %d.\n", *(C[0][0] + 1));

    // C itself returns a pointer to a 2x2 matrix
    print3d(C);

    return 0;

}