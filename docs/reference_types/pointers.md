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