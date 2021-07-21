#include <stdlib.h>
#include <stdio.h>

// Called function
// add() now takes pointers as arguments
// We'll need now to access the values using the * (dereferencing)
// a and b are pointers to integer local to add()

int add(int *a, int *b){

    // Printing info

    printf("The address of 'a' (the pointer variable) in add() is %p.\n", &a);
    printf("The value that 'a' has is the address of 'x' in main(), %p.\n", a);
    printf("The value in the address stored by 'a' is %d.\n", *a);

    int c = (*a) + (*b);
    return c;

}

// Calling funtion

int main(int argc, char *argv[]){

    // Pointers as function returns
    // The same as the previous code, but calling add() by reference
    // x and y are integers local to main()

    int x = 2, y = 4;
    int z = add(&x, &y);
    
    printf("\nThe address of 'x' in main() is %p.\n", &x);
    printf("\nThe sum of x and y is %d.\n", z);


    return 0;

}