# Types & Variables

## Primitive types

Primitive types try to map a direct relationship to the hardware, such as `int` or `Boolean`.
Underneath the hood, the sizes of types differ by the architecture of the CPU.

### Integer types

Store whole numbers. Any of them can be signed or unsigned. There are 4 different sizes of integers:

- short int
- int
- long int
- long long int

### Floating point types

Store fractional numbers. Fractional numbers are approximations, and the more of the number that is stored
in memory, the more precise it is (hence the name for floating point **precision**)

C++ has 3 levels of floating point precision:

- float - single precision (suffix with f, i.e. `1.2f`)
- double - double precision (no suffix, i.e. `1.2`)
- long double - extended precision (suffix with L, i.e. `1.2L`)

### Character types

Store human language data, encoded by some standard like ASCII or Unicode.

Six C++ character types are:

- char - 1 byte (i.e. ASCII chars)
- char16_t - 2 bytes (i.e. UTF-16)
- char32_t - 4 bytes (i.e. UTF-32)
- signed char
- unsigned char
- wchar_t - large enough to contain the largest character in the current locale (i.e. Unicode)

### Boolean types

Stores either 'true' or 'false'

goes by `bool`

### Comparison operators

Available operators in C++ are:

- **==** - equality operator
- **!=** - inequality operator
- **>,<,>=,<=** - greater than (or equal to), less than (or equal to)

### Logical operators

Evaluate boolean logic on bool types

A unary operator takes in a single bool type (an operand)
A binary operator takes in two bool types (two operands)
A ternary operator takes in three bool types

Operators are:

- ! - NOT (unary)
- AND, OR - binary

### The std::byte type

Raw memory bit type which allows for bitwise logic operations.

The std::byte comes from the library `cstddef` (standard definitions)

### size_t type

size_t type comes from library `cstddef` and allows the coder to encode size of objects.
It can accommodate the largest of types of a given architecture

Unary operator `sizeof` takes a type operand and returns its size as `size_t` type

Format specifier: `%zd`

### void type

C++ void type is an empty set of values (akin to a `Unit` (Kotlin) or `()` (Haskell) types in 
other languages)

A value cannot be assigned to a void but a function can potentially return nothing, hence having
a `void` return type.

### User-defined types

There are 3 categories of user-defined types:

#### Enumerations

A set of possible values; great for creating categorical concepts.

In C++, enums use integers under the hood

```c++
# Declaring an enum of colors
enum class Color {
    BLUE,
    GREEN,
    YELLOW,
    RED
};

# Initializing an enum value
Color color = Color::RED;
```

Use [switch statement](conditionals.md) to conditionally branch based on enum value

```c++
Color color = Color::RED;
switch (color) {
    case Color::BLUE: {
        printf("The color is blue");
    } break;
    case Color::RED: {
        printf("The color is red");
    } break;
    default: {
        printf("The color is ???");
    } break;
}
```

#### Classes

Classes contain data and functions (state and behavior).
 
Simplest kind of class is a POD -- (Plain old data classes)

```c++
struct Book {
    char name[256];
    int year;
    int pages;
};

# Declaring
int main() {
    Book myBook; // Auto initialized
    myBook.year = 1999;
    printf("The book year is %d", myBook.year)
    return 0;
}
```



#### Unions

## Variables

### Declaring

To declare a variable is to define it in the program.
In C++, you must provide the type of the variable first

```c++
int counter;
```

### Initializing

To initialize a variable is to bind it to a value;

```c++
// Declare and initialize
int counter = 0;

// Initialize after declaration
int counter;
counter = 0;
```

