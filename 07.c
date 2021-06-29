#include <stdio.h>
#include <stdlib.h>

// Call by value: when a function variable receives the value of a main() variable, but they differ

int increment(int a){
    a = a + 1;
    printf("The address the variable 'a' from the function has is %p.\n", &a);
}

// Call by reference: when we pass the address of a variable as an argument (saves memory)
// The same as int *p; p = &a;
// Dereferencing the main() 'a'

void increment_ref(int *p){
    *p = (*p) + 1;
    printf("\nThe address the pointer inside increment_ref stores is %p.\n", p);
}

int main(int argc, char *argv[]){

    // First case of use of pointer variables: pointers as function arguments (call by reference)
    // Stack: part of the RAM allocated to an application that is responsible for local variables
    // When a function just started, all the information about it goes to Stack, above main()
    // When that function finishes, it's totally cleared, and main() resumes its execution

    // Trying to increment 'a' as a beginner programmer would do (using call by value):

    int a = 10;
    increment(a);

    printf("\nThe address of the variable 'a' inside main is %p. (not the same as the above one)\n", &a);
    printf("We tried to increment 'a', but it still is %d.\n", a);

    // It didn't change the value 'a' because the 'a' inside the function is another 'a'.

    // Incrementing 'a' using call by reference, by passing the address of the main() 'a'
    // The pointer inside increment_ref() stores the address of the main() 'a' 

    increment_ref(&a);
    printf("The new value of 'a' is %d.\n", a);



    return 0;
}