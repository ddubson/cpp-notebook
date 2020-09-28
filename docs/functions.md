# Functions

Functions in C++ are really procedures. They are not related
to mathematical notion of a function in that they must have 
an input and an output, and be pure (for a given input, the
function must always return the same output).

## Simple functions

```c++
// Function prototype to let whoever uses the function know about it.
// A function prototype is only needed if code above your function uses it.
int isEven(int)

// some code in between...

int isEven(int aNumber) {
    return aNumber % 2 == 0;
}
```

!!!note
    Function prototypes just describe the return type and the parameter types,
    without any need of formal parameter names.