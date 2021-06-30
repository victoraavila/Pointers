#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Pointers and Arrays
    // When we create an array of five integers, we fill five consecutive integer spaces in the RAM
    // The overall size of this array will be 5 x 4 bytes = 20 bytes

    int A[] = {2, 4, 5, 8, 1};

    // Creating other variables: an integer and a pointer to this integer

    int x = 5;
    int *p;
    p = &x;

    // Printing the informations the pointer has: the address of x and its value

    printf("The value the pointer 'p' stores is the address of x: %p.\n", p);
    printf("By derefencing the address the pointer 'p' stores, we get the value of x: %d.\n", *p);

    // Incrementing the address the 'p' pointer stores by one and printing the new infos
    // We don't know what will be the value located at &x + 4 bytes

    p = p + 1;

    printf("\nThe value the pointer 'p' now stores is: %p. (the address of x + 4 bytes)\n", p);
    printf("By derefencing the address the pointer 'p' stores, we get a garbage value: %d.\n", *p);

    // Instead, let's replace the pointer 'p' for a new pointer to the first element of 'A'

    p = &A[0]; // Could be p = A

    // Now let's get some infos abound the first two elements of the array using the pointer

    printf("\nThe first element of the array is located at the address %p.\n", p);
    printf("The value of the first element of the array is: %d.\n", *p);
    printf("The second element of the array is located at the address %p.\n", p + 1);
    printf("The value of the second element of the array is: %d.\n", *(p + 1));

    // We could even not use the pointer 'p' to get these information
    // 'A' is also a pointer to the first element of itself (stores the base address of the array)

    printf("\nThe first element of the array is located at the address %p. (the same as %p)\n", A, &A[0]);
    printf("The value of the first element of the array is: %d. (the same as %d)\n", *A, A[0]);
    printf("The second element of the array is located at the address %p.\n", A + 1);
    printf("The value of the second element of the array is: %d.\n", *(A + 1));

    // For an element of the array 'A' at the index i:
    // We can retrieve its address using &A[i] or A + i
    // We can retrive its value using A[i] or *(A + i)

    for (int i = 0; i < 5; i++){
        
        printf("\nElement %d:\n", i);

        printf("Address = %p\n", &A[i]);
        printf("Address = %p\n", A + i);
        printf("Value = %d\n", A[i]);
        printf("Value = %d\n", *(A + i));

    }

    // CAUTION: incrementing 'A' like A++ is invalid, although incrementing a pointer to the array 'A' like p++ is accepted.


    return 0;

}