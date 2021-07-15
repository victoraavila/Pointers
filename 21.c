#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Dynamic Memory (Heap) allocation
    // Let's say we want to declare an array, which size will be given by the user

    int n;
    printf("Enter the desired size of the array of integers: ");
    scanf("%d", &n);

    // We CANNOT do int A[n];
    // That will give us a compilation error
    // That happens because we CANNOT discover the size of the array during runtime

    // But we CAN create the array A by allocating the memory dynamically, and typecasting it to int*

    int *A = (int *) malloc(n * sizeof(int));

    // Filling in some data into the dynamically allocated array

    for (int i = 0; i < n; i++){

        A[i] = i + 1;

    }

    // Printing all the elements in the array

    printf("\n==========ALL ELEMENTS IN THE ARRAY==========\n");
    for (int i = 0; i < n; i++){

        printf("A[%d] (or *(A + %d)) = %d (or %d)\n", i, i, *(A + i), A[i]);

    }



    return 0;

}