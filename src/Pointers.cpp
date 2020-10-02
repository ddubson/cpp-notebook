#include <cstdio>

void pointers() {
    // declare and initialize a normal int variable
    int counter{22};
    printf("The counter is %d\n", counter);

    // Declare and initialize an int pointer that "points" to the address of `counter` variable
    int *counter_ptr = &counter;
    printf("Counter address is at %p\n", counter_ptr);

    // Get the value of counter via it's pointer
    printf("The value of counter: %d\n", *counter_ptr); // -> 22
    printf("counter address is: %p\n", counter_ptr);

    // Modify the value of an object via dereferenced pointer
    *counter_ptr = 44;
    printf("The value of counter: %d\n", *counter_ptr); // -> 44
    printf("counter address is: %p\n", counter_ptr); // same as last address
}