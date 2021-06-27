#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    
    // A pointer must have the same type of the variable it points to
    
    // Initializing an integer and a pointer to this int, assigning value to the integer 
    int a;
    int *p;

    a = 10;
    p = &a;
    
    printf("The address value that the pointer contains is: %p\n", p);
    printf("The value that the pointer points to is: %d\n", *p);
    printf("The address of the integer is: %p\n", &a);

    // Derefencing: changing the value of the integer by using the pointer
    *p = 12;

    printf("\nThe value of the integer now is: %d\n", a);

    // The value of the integer that the pointer points to will be the same as other integer
    // This doesn't change the address that p points to
    int b = 20;
    *p = b;
    
    printf("\nThe address value that the pointer contains is: %p\n", p);
    printf("The value that the pointer points to is: %d\n", *p);


    return 0;
}