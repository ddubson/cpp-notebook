# Classes

## const methods

Methods marked with const are treated as read-only,
meaning there cannot be any modification of object's
state within them.

The `const` operator is applied on after the name of
method.

```cpp
class Guitar {
public:
    int get_number_of_strings() const {
        return this->stringNumber;
    }
private:
    int stringNumber = 6;
};

void classes() {
    Guitar guitar{};
    printf("Number of strings: %d\n", guitar.get_number_of_strings());
}
```

!!!note
    Holders of `const` references cannot invoke methods that are not
    const
    
## const member variables

Class member variables that cannot be modified after their initialization

```cpp
class Book {
public:
    const int year = 2000;
};
```

## Member initializer lists

Primary mechanism for initializing class members. They help with
initializing members via constructor like so:

```cpp
class Book {
    int year;
    char* title;
    
public:
    Book(int year, char* title): year { year }, title { title } {}
};
```