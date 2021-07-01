#include <stdlib.h>
#include <stdio.h>

// Refactoring the previous code, although returning the same result
// It is preferrable to pass the size calculated in the main() function as an argument

int SumOfElements(int *A, int size){

    int i, sum = 0;
    printf("In the function SOE:\n");
    printf("The size of A is %ld bytes (actually it is a pointer to the original array), and the size of A[0] is %ld bytes.\n", sizeof(A), sizeof(A[0]));

    // if A were an array instead of pointer, we could not do A++ or A--;
    // *(A + i) = A[i]

    for(i = 0; i < size; i++){
        sum += *(A + i); 
    }

    return sum;
}

// Arrays are passed by reference, so we can change their value globally

void DoubleElements(int *A, int size){

    for(int i = 0; i < size; i++){
        A[i] = 2 * A[i]; // Dereferencing is done (could be *(A + i) = 2 * *(A + i))
    }

}


int main(int argc, char *argv[]){

    int A[5] = {1, 2, 3, 4, 5};

    int size = sizeof(A) / sizeof(A[0]);

    int total = SumOfElements(A, size); // We could get the same result with &A[0]

    printf("\nThe sum of the elements in the array is: %d.\n", total);
    printf("\nIn the function main():\n");
    printf("The size of A is %ld bytes, and the size of A[0] is %ld bytes.\n\n", sizeof(A), sizeof(A[0]));

    // Doubling the elements of the array

    DoubleElements(A, size);

    for(int i = 0; i < size; i++){
        printf("%d\n", A[i]);
    }

    return 0;

}