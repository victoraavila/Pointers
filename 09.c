#include <stdlib.h>
#include <stdio.h>

int SumOfElements(int A[], int number_of_elements){

    printf("The number of elements this array has is %d.\n", number_of_elements);

    int i, sum = 0;
    for (i = 0; i < number_of_elements; i++){
        sum = sum + A[i];
    }

    return sum;

}

int SumOfElementsWithSize(int A[]){ // The interpreter considers int A[] = int *A

    int number_of_elements = sizeof(A) / sizeof(A[0]);

    printf("\nThe WithSize function sees the size of A = %ld bytes (pointer to integer), and the size of A[0] = %ld bytes.\n", sizeof(A), sizeof(A[0]));

    int i, sum = 0;
    for (i = 0; i < number_of_elements; i++){
        sum = sum + A[i];
    }

    return sum;

}

int main(int argc, char *argv[]){

    // Passing arrays as function arguments

    // Creating an array of integers

    int A[] = {1, 2, 3, 4, 5};

    // Calling the function that returns the sum of the elements of the array
    // We have got to know a way to get the number of elements of the array
    // sizeof() returns the size of some data structure in bytes

    int number_of_elements = sizeof(A) / sizeof(A[0]);
    
    int total = SumOfElements(A, number_of_elements);
    printf("The sum of the elements in this array is %d.\n", total);

    // Calling the sum function without passing the number of elements in the array

    total = SumOfElementsWithSize(A);
    printf("The sum of the elements (with size calculated inside the function) is %d. (totally WRONG)\n", total);

    // This new result is wrong, because when the compiler sees an array passed as a parameter,
    // it doesn't create a copy of the array inside the function.
    // Actually, in the function SumOfElementsWithSize one pointer to the first element of the
    // array (that exists inside main()) is created.

    // We always call by reference when we pass arrays as arguments


    return 0;

}