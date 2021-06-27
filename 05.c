#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Void type pointer, a generic pointer
    
    int a = 1025;
    int *p;
    p = &a;

    printf("The size of an integer is %li bytes.\n", sizeof(int));
    printf("The address the pointer stores is %p, which has the value %d.\n", p, *p);

    // Declaring the void pointer
    // Void pointers do not need typecasting
    // Void pointers CANNOT be dereferenced (it generates a compilation error)
    // Void pointers CANNOT be incremented (it doesn't know how many bytes to skip)

    void *p0;
    p0 = p;

    printf("\nThe address the void pointer stores is %p.\n", p0);


    return 0;
}