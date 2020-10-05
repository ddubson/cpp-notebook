#include <cstdio>
#include "1_declaring_variables.cpp"
#include "2_functions.cpp"
#include "Phone.cpp"
#include "Color.cpp"
#include "Book.cpp"
#include "Pointers.cpp"
#include "references.cpp"


void sizeOfArrays();

void structs();

void unions();

void print_year(Book*);

int main() {
    printf("Hello, world!\n");

    declaring_variables();

    functions();

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
    pointers();

    Phone phone{'a'};
    Phone *phone_ptr = &phone;
    printf("Is phone blocked: %d\n", phone_ptr->blocked);

    // Use the member-of-operator to access the object and modify its member
    phone_ptr->blocked = true;
    printf("Is phone blocked: %d\n", phone_ptr->blocked);

    Book books[] { Book{1999}, Book(2000) };
    print_year(books);

    references();
    return 0;
}

void sizeOfArrays() {
    int ar[] = {1, 2, 3, 4, 5};
    size_t n_elements = sizeof(ar) / sizeof(int); // used a lot in older code, a hack
    printf("The number of elements in the array is: %zu\n", n_elements);
}

void print_year(Book* book_ptr) {
    printf("Book year: %d\n", book_ptr->year);
}

void structs() {
    Book myBook{2000}; // Auto initialized
    myBook.year = 1999;
    printf("The book year is %d\n", myBook.year);

    Phone phone{'a'};
    printf("The phone model is %c\n", phone.model);
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