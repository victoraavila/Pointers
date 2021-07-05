#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

    // Character arrays and pointers
    // We use character arrays to store strings and to perform operations on them
    // (modifying a string, concatenating a string, copying a string, etc.)

    // To store a string in a character array, we need that:
    // 1) The size of the array >= the number of characters in the string + 1
    // (the null extra character '\0' HAS GOT TO BE USED for telling that the string has ended)
    
    // Filling a character array, but forgetting to append the NULL character
    
    char c1[4];

    c1[0] = 'J';
    c1[1] = 'O';
    c1[2] = 'H';
    c1[3] = 'N';

    // Printing the character array
    // In some computers, a bunch of unknown characters are printed at the end of this string

    printf("Without NULL character: %s (prints garbage characters too)\n", c1);

    // Filling a similar character array, but the following will have a NULL character
    // Printf only prints until it finds the '\0' character
    // All <string.h> functions assume that strings will be NULL terminated

    char c2[5];

    c2[0] = 'J';
    c2[1] = 'O';
    c2[2] = 'H';
    c2[3] = 'N';
    c2[4] = '\0';

    // Printing the new character array and the length of the string

    printf("\nWith NULL character: %s\n", c2);
    printf("This string has a length of %ld characters.\n", strlen(c2));

    return 0;
}