#include <cstdio>

void declaring_variables() {
    int counter; // declare a variable
    counter = 22; // initialize a variable
    printf("%d is my counter\n", counter); // printf with a format specifier of %d (i.e. digit)

    if (counter % 2 == 0) {
        printf("The counter is really even\n");
    }

    // Constant variables cannot be changed after initialized
    const int life = 42;
}

