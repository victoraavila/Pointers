#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Creating an integer variable
    int a;

    // Creating a pointer variable that points to an integer
    // Pointer's values can only be addresses
    int *p;

    // Assigning the address of the 'a' variable to the value of the pointer
    p = &a;
    
    // Both get the address of the 'a' variable
    printf("The value stored in the pointer variable is: %p\n", p);
    printf("The address of the integer variable is: %p\n", &a);

    // Getting the address of the 'p' pointer instead
    printf("\nThe address of the pointer variable is: %p\n", &p);

    // Assigning the address of the 'a' variable to 5
    a = 5;

    // Both get the value of the 'a' variable
    printf("\nThe value stored in the integer variable is: %d\n", a);
    printf("DEREFERENCING: The value stored in the int variable that the pointer points to is: %d\n", *p);

    return 0;
}