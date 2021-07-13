#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Pointers and dynamic memory - Part II

    // Unlike stack, the size of the application's heap is not fixed
    // Its size can vary during the lifetime of the application
    // It can grow as long as the OS doesn't run out of memory (can be DANGEROUS)
    // A program can control how much memory to use from the heap, and when to release it

    // Heap = Free Pool of Memory = Free Store of Memory = Dynamic Memory
    // We can use it flexibly, using as much memory as we want
    // A different heap is also one data structure (not the one in this context)

    // To use the Dynamic Memory (Heap) in C, we need to know four functions:
    // malloc(), calloc(), realloc(), free()

    int a; // This goes on stack

    // Let's say we want to store an integer on heap:
    // malloc(): "Give me a block of memory which is the size of an integer in bytes" (4 bytes)
    // Then, malloc() returns a void pointer to the starting address of the block allocated on heap
    // (int *) is a typecasting, so we have pointer-to-int in both sides of '='
    // The (int *p) pointer is local, stored on stack, and points to the block of memory created on heap

    int *p;
    p = (int *)malloc(sizeof(int));

    // The only way to use memory on heap is through reference
    // malloc() looks for free space on the heap and returns its address
    // Setting the value of the integer block of memory allocated on heap

    *p = 10;

    // Allocating other block of four bytes on the heap
    // The (int *p) pointer will now point to the address of the new integer block
    // The previous block will still be consuming heap memory, it WILL NOT be cleared automatically
    // Any memory allocated using malloc is cleared off using free(pointer):
    // free(p);

    p = (int *)malloc(sizeof(int));
    *p = 20;

    // Anything allocated on the heap is NOT automatically deallocated when the function completes
    // It does not need to live the full lifetime of the application like a global variable

    // Clearing off the second integer block of memory on heap, allocating an array of 20 ints on heap
    // malloc() will return the base address of the integer array on heap
    
    free(p);
    p = (int *) malloc(20 * sizeof(int));

    // Filling in the first value, printing information

    p[0] = 5;
    printf("The base address of the array of 20 integers is %p (or %p).\n", p, &p[0]);
    printf("The first element in the integer array is %d (or %d).\n", p[0], *(p + 0));

    // If malloc() can not find any free block of memory on heap, it returns NULL.
    // In C++, malloc() = new, free() = delete.

}