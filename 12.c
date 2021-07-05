#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    // Character arrays and pointers
    // A group of characters can be named as string literals
    // String literals can be passed instantly as values to character arrays
    // String literals have implicit NULL termination
    // The size of the char array can be hidden: in the following case it'll be 5 units / 5 bytes.

    char c[] = "JOHN";
    char c1[5] = {'J', 'O', 'H', 'N', '\0'};
    // char c[4] = "JOHN" // This would result in compilation error (length is not enough)
    // c = "JOHN" // This would be invalid
    
    // Printing information about the character array created
    
    printf("The size in bytes of the char array is %ld bytes.\n", sizeof(c));
    printf("The length in important characters of the char array is %ld chars.\n", strlen(c));

    // Arrays and pointers are different types that are used in a similar manner
    // Just using the name of the char array will return the ADDRESS of the first element of it

    // Creating a pointer to a character
    // It will point to the first element in the char array
    // We CANNOT do c = p;
    // We CANNOT do c = c + 1;
    // But we CAN do p++, so the pointer will point to the next element in the char array.

    char *p;
    p = c;

    printf("\nThe base address of the char array is %p (or %p).\n", &c[0], p);

    // Modifying the char array by using the pointer, and printing the char array by using it too

    p[0] = 'A';

    printf("The first element of the char array now is %c (or %c) (or %c).\n", *(p), p[0], c[0]);
    printf("The complete char array now is %s.\n", c);

    return 0;
}