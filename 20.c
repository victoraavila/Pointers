#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    // Functions used for Dynamic Memory Allocation
    // Three functions that allocate a block of memory on the heap:
    // malloc(), calloc(), realloc()
    // One function that deallocate a block of memory from the heap:
    // free(pointer)

    // The most frequent function used is malloc()
    // "Give me a block of heap memory with these many bytes".
    // malloc(): void* malloc(size_t size)
    // size is the size of the memory block that will be allocated in bytes
    // size_t only stores positive integer values (CANNOT be zero or negative)
    // malloc() returns a void pointer (void*) that gives us the address of the first byte in the block

    // Creating a block of Dynamic Memory with 4 bytes
    // The following is not useful for real applications

    void *p1 = malloc(4);
    printf("The base address of the block of memory allocated is %p.\n", p1);

    // Now we want to deallocate the previous block and allocate three integers (an array) on heap
    // The (int*) is used for typecasting the void* malloc() returns into int* 

    free(p1);

    int *p2 = (int *) malloc(3 * sizeof(int));
    printf("\nThe base address of this array of three integers is %p (or %p).\n", p2, &p2[0]);

    // We CANNOT derefence a void pointer

    // Now we want to fill in the Dynamic Memory block the values of the three integers:

    *p2 = 2; // Could be p2[0] = 2;
    *(p2 + 1) = 4; // Could be p2[1] = 4;
    *(p2 + 2) = 6; // Could be p2[2] = 6;

    printf("The second element of this array with three integers is %d (or %d).\n", *(p2 + 1), p2[1]);

    // All the manipulation on Dynamic Memory happens through pointers

    // calloc() does the same stuff as malloc()
    // calloc() also returns a void pointer
    // A difference is that it takes two arguments:
    // The number of elements of a particular data type, and the size of the data type in bytes.
    // The other difference is that calloc() sets all byte positions allocated to ZERO.
    // malloc(), for example, does NOT set values to zero. Instead, it lets garbage values persist.
    // calloc(): void* calloc(size_t num, size_t size)

    // Creating a block of Dynamic Memory that will allocate an array of three integers on heap

    free(p2);

    p2 = (int *) calloc(3, sizeof(int));
    printf("\nThe base address of this array of three integers now is %p (or %p).\n", p2, &p2[0]);
    printf("The second element of this array with three integers now is %d (or %d).\n", *(p2 + 1), p2[1]);

    // realloc() is used for when you already have a block of memory, and you want to change its size
    // void* Ptr is the pointer to the starting address of the existing block
    // size_t size is the size of the new block
    // If we want to increment the size of the block, it can be extended or copied to a larger space
    // realloc: void* realloc(void* Ptr, size_t size)

    return 0;

}