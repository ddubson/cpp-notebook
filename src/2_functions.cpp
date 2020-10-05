#include <cstdio>

// Function prototype/signature
int doubleTheCounter(int);

void functions() {
    int counter = 22;
    counter = doubleTheCounter(counter);
    printf("The counter is doubled at %d\n", counter);
}

int doubleTheCounter(int counter) {
    return counter * 2;
}