## Variables

### Declaring

To declare a variable is to define it in the program.
In C++, you must provide the type of the variable first

```cpp
int counter;
```

### Initializing

To initialize a variable is to bind it to a value;

```cpp
// Declare and initialize
int counter = 0;

// Initialize after declaration
int counter;
counter = 0;
```

### const

C++ supports declaring variables as immutable via
the `const` operator

```cpp
const int life = 42;
life = 41; // ERROR! cannot change value
```