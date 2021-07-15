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

    // Now we want to divide the size of the existing block in 2
    // The same block itself will be reduced
    // If the new number of elements is decimal, we'll only take the integer part of it
    // We also deallocate the elements that escape the new range
    // If we pass ZERO as the __size of realloc(), the complete block will be deallocated:
    // (int *) realloc(A, 0) = free(A);
    // (int *) realloc(NULL, n*sizeof(int)) = malloc(n*sizeof(int));

    printf("\nThe address of the previous Heap block is: %p.\n", A);
    A = (int *) realloc(A, (n/2)* sizeof(int));

    // Printing the address of the new block

    printf("The address of the new Heap block is: %p.\n", A);

    // Printing all the elements in the array

    printf("\n==========ALL ELEMENTS IN THE ARRAY==========\n");
    for (int i = 0; i < n; i++){

        printf("B[%d] (or *(B + %d)) = %d (or %d)\n", i, i, *(A + i), A[i]);

    }

    return 0;

}