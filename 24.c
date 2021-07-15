#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Dynamic Memory (Heap) allocation
    // Using realloc() to change the size of a previously allocated Dynamic Memory block

    int n;
    printf("Enter the desired size of the array of integers: ");
    scanf("%d", &n);

    // Allocating a block of Dynamic Memory (Heap) for the desired array of integers

    int *A = (int *) calloc(n, sizeof(int));

    // Filling in some data into the dynamically allocated array

    for (int i = 0; i < n; i++){

        A[i] = i + 1;

    }

    // We will realloc the previous block, doubling its size
    // It'll create a new memory block of size 2n, and copy the values in the previous A into the new one
    // If the size of the new block > the size of the old block:
    //      If it's possible to find consecutive memory to just extend the old one:
    //          The previous block itself is extended.
    //      Else:
    //          A new block is allocated, the content of the old one is copied, and then it's deallocated
    // Else:
    //      The same block will be reduced

    int *B = (int *) realloc(A, 2 * n * sizeof(int));

    // Printing the address of the old and the new block

    printf("\nThe address of the previous Heap block is: %p.\n", A);
    printf("The address of the new Heap block is: %p.\n", B);

    // We can see that it was possible to only extend the existent block

    // Printing all the elements in the array

    printf("\n==========ALL ELEMENTS IN THE ARRAY==========\n");
    for (int i = 0; i < 2*n; i++){

        printf("B[%d] (or *(B + %d)) = %d (or %d)\n", i, i, *(B + i), B[i]);

    }

    // All elements after the nth element (including it) have garbage values    

    return 0;

}