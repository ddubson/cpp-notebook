# Structs

Classes contain data and functions (state and behavior).
 
Simplest kind of class is a POD -- (Plain old data classes)

```c++
struct Book {
    char name[256];
    int year;
    int pages;
};

// Declaring
int main() {
    Book myBook{}; // Auto initialized
    myBook.year = 1999;
    printf("The book year is %d", myBook.year)
    return 0;
}
```

### Initializing structs

To initialize a struct (i.e. call its default constructor):

```c++
Book myBook{}; // The curlies are a call to the constructor
```

With multiple constructors, you can call in a similar way:

```c++
struct Phone {
    int[] calls;
    char[] model;
    
    Phone(char[] model) {
        this->model = model
    };
};
```
### Initializing struct members

To initialize struct members, inline bind values like so:

```c++
struct Phone {
    char owner[9] = { "John Doe" }; // Add an extra location for a NULL end of a char array
    int countryCode{1}; // short hand initialize to value 1
    int number[6]{ 3,3,3,2,2,2 }; // standard way of initializing
    bool blocked = false;
};
```

!!!note
    Use brace initializers everywhere to initialize vars. Consistency! (uniform initialization)
  
### Struct destructors

A destructor is the anti-constructor function used to clean up after a class has been removed from memory
references.

Destructors are in most cases optional and clean up is performed by the compiler as written in native instructions.

```c++
struct Phone {
    char owner[9] = { "John Doe" };
    int countryCode{1};
    int number[6]{ 3,3,3,2,2,2 };
    bool blocked = false;
    
    ~Phone() {
        printf("Shutting down\n");
    }
};
```