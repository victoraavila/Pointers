#include <stdlib.h>
#include <stdio.h>

// This returns the sum of two integers

int add(int a, int b){

    return a + b;

}

// This prints a simple string

void printHello(){

    printf("\nHello!\n");

}

// This says 'Hello!' to someone and takes a string as its argument

void printHelloSomeone(char *name){

    printf("\nHello, %s!\n", name);

}

int main(int argc, char *argv[]){

    // Function Pointers
    // Pointers don't necessarily store the address of variables, they can store the address of constants
    // So a pointer basically stores the address of some data

    // Function Pointers store the address of functions
    // We can dereference and execute a function using them

    // A compiler gets source code as input and compiles it to generate machine binary code

    // When a program starts execution, some amount of memory is allocated to it
    // The Code (text) segment is filled with the machine code instructions from the .exe file
    // Instructions are stored and executed sequentially, except for FUNCTION CALLS, which
    // cause the execution to jump to a few bytes later (to another instruction)

    // A function is a set of instructions stored in one contiguous block of memory on the Code segment
    // The address of a function (or entry point) is the address of the first instruction in the
    // function, on the Code segment
    // A function call makes the execution go to the address of the first instruction in the called func

    // Then, function pointers store the entry point of the block of instructions in a function 
    // The following function pointer points to the function add()
    // The first int is the data type the function returns (MUST BE IDENTICAL AS THE DECLARATION)
    // p is the name of the pointer
    // The following (int, int) is the type of the parameters the function accepts (MUST BE IDENTICAL AS THE DECLARATION)

    int (*p) (int, int);
    p = &add;
    p = add;    // This is the same as the above line

    // int *p (int, int) would be declaring a function p that returns a pointer to integer
    // &add = add (just using the function name would return the address of the function)

    // We can use the 'p' pointer to execute the function add()
    // The * operator here is used to dereference and get the function
    // (2, 3) are the arguments given to add()

    int c;
    c = (*p) (2, 3);
    c = p(2, 3);    // This is the same as the above line

    // Printing the result

    printf("The sum of 2 and 3 is %d.\n", c);

    // Creating a function pointer to the Hello function, and executing it

    void (*p2)();
    p2 = printHello;
    p2();

    // Creating a function pointer to the Hello Someone function, and executing it

    void (*p3)(char *);
    p3 = printHelloSomeone;
    p3("Tom");

    return 0;

}