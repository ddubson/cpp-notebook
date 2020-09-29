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

    int my_array[] = { 1, 2, 3, 4, 5 };
    printf("The 2nd element is %d\n", my_array[1]);

    int sum = 0;
    for(size_t i = 0; i < 100; i++) {
        sum += 2;
    }

    for(int x : my_array) {
        printf("Array value: %d\n", x);
    }
    printf("The sum is %d\n", sum);

    return 0;
}

int doubleTheCounter(int counter) {
    return counter * 2;
}