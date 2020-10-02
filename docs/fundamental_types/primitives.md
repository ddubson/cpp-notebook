# Primitive types

Primitive types try to map a direct relationship to the hardware, such as `int` or `Boolean`.
Underneath the hood, the sizes of types differ by the architecture of the CPU.

## Integer types

Store whole numbers. Any of them can be signed or unsigned. There are 4 different sizes of integers:

- short int
- int
- long int
- long long int

## Floating point types

Store fractional numbers. Fractional numbers are approximations, and the more of the number that is stored
in memory, the more precise it is (hence the name for floating point **precision**)

C++ has 3 levels of floating point precision:

- float - single precision (suffix with f, i.e. `1.2f`)
- double - double precision (no suffix, i.e. `1.2`)
- long double - extended precision (suffix with L, i.e. `1.2L`)

## Character types

Store human language data, encoded by some standard like ASCII or Unicode.

Six C++ character types are:

- char - 1 byte (i.e. ASCII chars)
- char16_t - 2 bytes (i.e. UTF-16)
- char32_t - 4 bytes (i.e. UTF-32)
- signed char
- unsigned char
- wchar_t - large enough to contain the largest character in the current locale (i.e. Unicode)

## Boolean types

Stores either 'true' or 'false'

goes by `bool`

## Comparison operators

Available operators in C++ are:

- **==** - equality operator
- **!=** - inequality operator
- **>,<,>=,<=** - greater than (or equal to), less than (or equal to)

## Logical operators

Evaluate boolean logic on bool types

A unary operator takes in a single bool type (an operand)
A binary operator takes in two bool types (two operands)
A ternary operator takes in three bool types

Operators are:

- ! - NOT (unary)
- AND, OR - binary

## The std::byte type

Raw memory bit type which allows for bitwise logic operations.

The std::byte comes from the library `cstddef` (standard definitions)

## size_t type

size_t type comes from library `cstddef` and allows the coder to encode size of objects.
It can accommodate the largest of types of a given architecture

Unary operator `sizeof` takes a type operand and returns its size as `size_t` type

Format specifier: `%zd`

## void type

C++ void type is an empty set of values (akin to a `Unit` (Kotlin) or `()` (Haskell) types in 
other languages)

A value cannot be assigned to a void but a function can potentially return nothing, hence having
a `void` return type.

## User-defined types

There are 3 categories of user-defined types:

### Enumerations

A set of possible values; great for creating categorical concepts.

In C++, enums use integers under the hood

```cpp
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

Use [switch statement](../conditionals.md) to conditionally branch based on enum value

```cpp
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

### Unions 🔥

!!!warning
    Avoid using Unions -- they lead to dangerous memory corruption if not properly handled 🔥

A union type is akin to a logical `OR` type.

```cpp
union Variant {
    int integer;
    double floating_point;
};

int main() {
    Variant v{}; // declare
    v.floating_point = 54.0;
    printf("float is: %f\n", v.floating_point);
    v.integer = 42;
    printf("int is: %d\n", v.integer);

    // Dangerous! Since a union may only have one value at a time. This memory location could be reset.
    printf("float is now: %f\n", v.floating_point);
}
```

This is read as `Variant` may either have:
 
- a char sequence
- an integer
- a floating point number 

at any time. It cannot have multiple values.


