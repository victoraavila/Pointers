#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void myOwnPrint(char *c){

    // If we have a pointer that points to the base address of a char array, we can modify it
    // If we DO NOT want to have the permission to modify it (just to read), we can pass the argument as
    // void myOwnPrint(const char *c)

    c[0] = 'A';

    while (*c != '\0'){

        printf("%c", *c);
        c++;

    }

    printf("\n");

}

int main(int argc, char *argv[]){

    // Character arrays, strings and pointers - Part II
    // Assigning a string literal to a character pointer
    // When we do not assign a string literal to a char array, it becomes a constant
    // Constants CANNOT be modified. Such operation gives a runtime error.

    char *p = "Hello";
    //p[0] = 'A'; // Not allowed, because the pointer to char points to a constant

    char c[20] = "Hello";
    myOwnPrint(c);

    return 0;

}