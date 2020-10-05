# Pointers

Mechanism used to refer to memory addresses. 
Pointers encode the object's address and object's type.

## Declaring a pointer

For example, to declare a pointer to a pointed-to type of `int`:

```cpp
int* counter;
```

## Address-of operator (&)

For any given variable, to get the memory address of that variable, 
use the **address-of (&) operator**

```cpp
// declare and initialize a normal int variable
int counter{22};
printf("The counter is %d", counter);

// Declare and initialize an int pointer that "points" to the address of `counter` variable
int* counter_ptr = &counter;
printf("Counter address is at %p", counter_ptr);
```

!!!note
    The length of the value of the pointer on x86 (32-bit, 8 hex) systems is 
    4 bytes whereas on x64 (64-bit, 16 hex) systems. The size of a pointer depends
    on the size of the machine's CPU general purpose register (i.e. `eax`)
    
## Dereferencing operator (*)

The dereferencing operator (`*`) is a unary operator that retrieves the object to which 
the pointer points to. (The inverse of the address-of operator)

```cpp
int counter{22};
int* counter_address = &counter;

// Get the value of counter via it's pointer
printf("The value of counter: %d\n", *counter_address); // -> 22
printf("counter address is: %p\n", counter_address); 

// Modify the value of an object via dereferenced pointer
*counter_address = 44;
printf("The value of counter: %d\n", *counter_address); // -> 44
printf("counter address is: %p\n", counter_address); // same as last address
```

!!!note
    Think of dereferencing as "get me the value of the object, not its memory address"

## Member-of-Pointer operator (->)

The member-of-pointer operator does two operations:

- It dereferences a pointer
- It accesses a member of the pointed-to object

```cpp
struct Phone {
    bool blocked{false};
};

int main() {
    Phone phone{};
    Phone *phone_ptr = &phone;
    printf("Is phone blocked: %d\n", phone_ptr->blocked);

    // Use the member-of-operator to access the object and modify its member
    phone_ptr->blocked = true;
    printf("Is phone blocked: %d\n", phone_ptr->blocked);
    
    // The hard way - dereference and access
    printf("Is phone blocked: %d\n", (*phone_ptr).blocked);
}
```

## Pointers and arrays

Pointers and arrays have a lot of similarities. Pointers encode object addresses,
whereas arrays encode the location and length of contiguous objects.

An array can **decay** into a pointer very easily. A decayed array loses length
information and becomes a pointer to the first element in the array.

```cpp
int my_array[]{ 1, 2, 3, 4, 5};
int* my_array_ptr = my_array;
```

Here's an example of the ease in which an array can decay into a pointer:

```cpp
struct Book { 
    int year{};
    
    Book(int year) {
        this->year = year;
    }
};

void print_year(Book* book_ptr) {
    printf("Book year: %d\n", book_ptr->year);
}

int main() {
    Book books[]{ Book(1999), Book(2000), Book(2001)};
    print_year(books);
}
```

### Pointer arithmetic

!!!note
    **Pointer arithmetic** is the set of rules for addition and subtraction on pointers

To get the n-th element of an array, you have to perform some pointer arithmetic.

Two options:

First approach is with square brackets with address-of (&) operator

```cpp
Book* third_book_ptr = &books[2];
```

Second approach is to use arithmetic

```cpp
Book* third_book_ptr = books + 2;
```

!!!warning
    Pointers are quite dangerous, spawning vulnerabilities like buffer overflows.
    
## void and std::byte Pointers

When the pointed-to type is irrelevant, you can use the `void*` pointer. It can
never be dereferenced since there is no underlying type to point to.

void pointer arithmetic is forbidden, impossible for a void pointer to have any offsets.

When you want to interact with raw memory at byte level, like copying data between files
you can use a `std::byte` pointer

## nullptr and Booleans

Pointers can have a special value of `nullptr` -- a pointer that doesn't point
to anything. Used for indicating that there is no more memory left to allocate

Pointers have an implicit conversion to `bool` -- any pointer that points to something
is `true` while a nullptr is `false`