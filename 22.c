#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Dynamic Memory (Heap) allocation
    // The same as the previous program, but using calloc() instead

    int n;
    printf("Enter the desired size of the array of integers: ");
    scanf("%d", &n);

    // Allocating a block of Dynamic Memory (Heap) for the desired array of integers

    int *A = (int *) calloc(n, sizeof(int));

    // Filling in some data into the dynamically allocated array

    for (int i = 0; i < n; i++){

        A[i] = i + 1;

    }

    // Printing all the elements in the array
    // If we hadn't filled the value of all elements individually, they would all be ZERO because of calloc()
    // malloc() would let garbage values persist instead.

    printf("\n==========ALL ELEMENTS IN THE ARRAY==========\n");
    for (int i = 0; i < n; i++){

        printf("A[%d] (or *(A + %d)) = %d (or %d)\n", i, i, *(A + i), A[i]);

    }

    // Any memory that was dynamically allocated remains allocated till the end of the program
    // It's important to deallocate the Heap memory used regularly

    

    return 0;

}