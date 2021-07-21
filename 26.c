#include <stdlib.h>
#include <stdio.h>

// A function that returns the sum of two integers
// a, b and c are local variables to the add() function

int add(int a, int b){

    printf("The address of 'a' in add() is %p.\n", &a);

    int c = a + b;
    return c;

}

int main(int argc, char *argv[]){

    // Pointers as function returns
    // A pointer is a data type that stores the address of another data type

    // Creating variables and evaluating the sum of them
    // z will receive the value returned by the function add(), called by value
    // x, y and z are local variables to the main() function
    // The value in x of main() is copied to a of add(), and so on...
    // Besides having the same value, x and a are different variables, located in different addresses

    int x = 2, y = 4;
    int z = add(x, y);
    
    printf("\nThe address of 'x' in main() is %p.\n", &x);
    printf("\nThe sum of x and y is %d.\n", z);

    // The names of variables are specific to a particular function

    return 0;

}