#include <cstdio>

// Function prototype/signature
int doubleTheCounter(int);

int main() {
    printf("Hello, world!\n");

    int counter; // declare a variable
    counter = 22; // initialize a variable
    printf("%d is my counter\n", counter); // printf with a format specifier of %d (i.e. digit)

    if(counter % 2 == 0) {
        printf("The counter is really even\n");
    }

    counter = doubleTheCounter(counter);
    printf("The counter is doubled at %d\n", counter);
    return 0;
}

int doubleTheCounter(int counter) {
    return counter * 2;
}