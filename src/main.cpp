#include <cstdio>
#include "Color.cpp"

// Function prototype/signature
int doubleTheCounter(int);

void sizeOfArrays();

void structs();

void unions();

int main() {
    printf("Hello, world!\n");

    int counter; // declare a variable
    counter = 22; // initialize a variable
    printf("%d is my counter\n", counter); // printf with a format specifier of %d (i.e. digit)

    if (counter % 2 == 0) {
        printf("The counter is really even\n");
    }

    counter = doubleTheCounter(counter);
    printf("The counter is doubled at %d\n", counter);

    int my_array[] = {1, 2, 3, 4, 5};
    printf("The 2nd element is %d\n", my_array[1]);

    int sum = 0;
    for (size_t i = 0; i < 100; i++) {
        sum += 2;
    }

    for (int x : my_array) {
        printf("Array value: %d\n", x);
    }
    printf("The sum is %d\n", sum);

    sizeOfArrays();
    enums();
    structs();
    unions();
    return 0;
}

int doubleTheCounter(int counter) {
    return counter * 2;
}

void sizeOfArrays() {
    int ar[] = {1, 2, 3, 4, 5};
    size_t n_elements = sizeof(ar) / sizeof(int); // used a lot in older code, a hack
    printf("The number of elements in the array is: %zu\n", n_elements);
}

struct Book {
    int year;
};

void structs() {
    Book myBook; // Auto initialized
    myBook.year = 1999;
    printf("The book year is %d\n", myBook.year);
};

union Variant {
    int integer;
    double floating_point;
};

void unions() {
    Variant v{}; // declare
    v.floating_point = 54.0;
    printf("float is: %f\n", v.floating_point);
    v.integer = 42;
    printf("int is: %d\n", v.integer);

    // Dangerous! Since a union may only have one value at a time. This memory location could be reset.
    printf("float is now: %f\n", v.floating_point);
}