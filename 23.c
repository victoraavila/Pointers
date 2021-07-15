#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Dynamic Memory (Heap) allocation
    // Freeing allocated dynamic memory before printing
    // Any memory that was dynamically allocated remains allocated till the end of the program
    // It's important to deallocate the Heap memory used regularly

    int n;
    printf("Enter the desired size of the array of integers: ");
    scanf("%d", &n);

    // Allocating a block of Dynamic Memory (Heap) for the desired array of integers

    int *A = (int *) calloc(n, sizeof(int));

    // Filling in some data into the dynamically allocated array

    for (int i = 0; i < n; i++){

        A[i] = i + 1;

    }

    // Freeing allocated dynamic memory

    free(A);

    // Printing all the elements in the array

    printf("\n==========ALL ELEMENTS IN THE ARRAY==========\n");
    for (int i = 0; i < n; i++){

        printf("A[%d] (or *(A + %d)) = %d (or %d)\n", i, i, *(A + i), A[i]);

    }

    // Garbage values were printed
    // With pointers, if you know the address, you can look at the value at that address.
    // You really should read and write to that address ONLY if it was allocated to you
    // Not following this can lead to strange behaviour
    // It's not recommendable to fill in values in the array after deallocating its addresses
    // It's good practice to set the pointer to NULL to avoid working with garbage values
        
    A = NULL;
    

    return 0;

}