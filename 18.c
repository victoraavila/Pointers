#include <stdlib.h>
#include <stdio.h>

// Pointers and dynamic memory

// The memory assigned to an application can be divided in four segments.
// Code (text): stores the instructions that will be executed
// Static/global: stores the variables that are acessible inside any function
// Stack: stores all the information about function calls and local variables
// These three segments do NOT grow while the application is running.

// At any time, the function on top of the stack is the only one executing
// total is a global variable

int total;

int Square(int x){

    return x*x;

}

int SquareofSum(int x, int y){

    // At the following line, the Square() stack frame is created on the top of the SquareofSum() frame

    int z = Square(x + y);

    // When the above line finishes, the Square() stack frame is deleted and this function resumes

    return z;

}

// All the following variables are stored inside the main() function stack frame
// The size of the stack frame of a function is defined when the program is compiling

int main(int argc, char *argv[]){

    int a = 4, b = 8;

    // At the following line, the SquareofSum stack frame is created on the top of the main() stack frame

    total = SquareofSum(a, b);

    // When the above line finishes, the SquareofSum() stack frame is deleted and main() resumes
    // printf() also creates its own stack frame, which is deleted after its execution
    
    printf("Output = %d.\n", total);

    return 0;

}

// main() stack frame is deleted here
// At this point, the global variable total is also deleted
// Global variables are useful in case we need to use the same variable in multiple functions
// When we don't need that, it's a waste of memory

// Stack overflow: when we create multiple stack frames and it exceeds the amount of memory available for stack
// The allocation of the stack frames and local variables happens during runtime
// In this case, our program would crash.

// It's not possible to manipulate the scope of a variable if it's on the stack.

// If we declare a large data type, like an array, we need to know the size of the array at compile time.