#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// This function DO NOT know the length of the string

void myOwnPrint(char c[]){ // For the compiler, char c[] = char *c

    int i = 0;
    while (*(c + i) != '\0'){ // Could be c[i]
        
        printf("%c", c[i]);
        i++;
    
    }
    printf("\n"); // Will be printed when it finds a NULL character

    while (*c != '\0'){

        printf("%c", *c);
        c++;

    }
    printf("\n");

}

int main(int argc, char *argv[]){

    // Arrays are always passed to functions by reference
    // We only pass the base address of the array in a pointer variable

    char c[20] = "Hello";
    myOwnPrint(c); // Could be &c[0]

    return 0;
}


