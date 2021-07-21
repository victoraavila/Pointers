#include <stdlib.h>
#include <stdio.h>

// A simple function that prints "Hello, World!"

void printHelloWorld(){

    printf("Hello, World!\n");

}

// Called function
// add() now returns a pointer to integer

int *add(int *a, int *b){

    // Printing info

    printf("The address of 'a' (the pointer variable) in add() is %p.\n", &a);
    printf("The value that 'a' has is the address of 'x' in main(), %p.\n", a);
    printf("The value in the address stored by 'a' is %d.\n", *a);

    int c = (*a) + (*b);
    return &c; 

    // After the }, the stack frame of this function is deallocated:
    // The memory becomes free, and we CANNOT guarantee what values exist now in the old addresses
    // Printing *ptr in main() will give segmentation fault because the addresses used
    // won't have reliable values anymore
    // So it's not OK to return &c, as it means returning the address of a local variable from top
    // to bottom in the stack of functions called.

}

// Calling funtion

int main(int argc, char *argv[]){

    // Pointers as function returns - THIS CODE IS MEANT TO NOT WORK PROPERLY
    // The same as the previous code, but returning a pointer to int in the add() function

    int x = 2, y = 4;

    // ptr now must be a pointer to int variable, so it can match the return of add()

    int *ptr = add(&x, &y);

    // Calling the brand-new function
    printHelloWorld();
    
    printf("\nThe address of 'x' in main() is %p.\n", &x);
    printf("\nThe sum of x and y is %d.\n", *ptr);

    // Concluding, the use cases of returning pointers in functions are:
    // 1) If the memory block containing the returning pointer of the function is located in Heap
    // or in the Global Memory Block. This is safe because we need to deallocate this block by ourselves.
    // The global variables persist for the whole lifetime of the program.

    return 0;

}