# References

References are a safer alternative to pointers.

They cannot be assigned to a `null`, nor be reassigned once set.

To create a reference, use the reference operator `&`

```cpp
struct Book {
    int year;
};

void print_year(Book& book) { // reference to book
    printf("Book year: %d", book.year);
}

int main() {
    Book book;
    print_year(book); // Implicitly passed by reference
}
```