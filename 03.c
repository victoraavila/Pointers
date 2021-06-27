#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

    // Assigning a value to the variable right in the beginning
    // int* p = int *p (Both are equal)
    
    int a = 10;
    int *p = &a;

    printf("The address value that the pointer contains is: %p\n", p);
    printf("The address of the integer is: %p\n", &a);

    // Pointer arithmetic
    // p + 1 increments p by four bytes (it will point to the next integer address)
    // if p = 2002 and int *p, p + 1 = 2006

    printf("\nThe size of an integer is: %li bytes.\n", sizeof(int));
    printf("The address stored in p is: %p\n", p);
    printf("The address stored in p + 1 is: %p\n", p + 1);
    printf("The address stored in p + 2 is: %p\n", p + 2);

    printf("\nThe value located in the address that p points is: %d\n", *p);
    printf("The value located in the address that p + 1 points is: %d (memory garbage)\n", *(p + 1));

    return 0;

}