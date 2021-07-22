#include <stdlib.h>
#include <stdio.h>

void printHelloWorld(){

    printf("\nHello, World!\n");

}

int *add(int *a, int *b){

    // Printing info

    printf("The address of 'a' (the pointer variable) in add() is %p.\n", &a);
    printf("The value that 'a' has is the address of 'x' in main(), %p.\n", a);
    printf("The value in the address stored by 'a' is %d.\n", *a);

    // Creating the int *c pointer by allocating a 4-bytes memory block on the Heap
    
    int *c = (int *) malloc(sizeof(int));
    printf("'c' is a pointer to int that stores the following address from the Heap: %p.\n", c);

    *c = (*a) + (*b);

    // We are safe now: we'll return the address of a block that is on Heap

    return c; 

}

int main(int argc, char *argv[]){

    // Pointers as function returns - THIS CODE IS THE SOLUTION TO THE PREVIOUS ONE

    int x = 2, y = 4;

    int *ptr = add(&x, &y);

    printHelloWorld();
    
    printf("\nThe address of 'x' in main() is %p.\n", &x);
    printf("\nThe sum of x and y is %d.\n", *ptr);

    free(ptr);

    return 0;

}