#include <cstdio>

void print_year(Book& book) { // reference to book
    printf("Book year: %d", book.year);
}

void references() {
    Book book{1999};
    print_year(book); // Implicitly passed by reference
}