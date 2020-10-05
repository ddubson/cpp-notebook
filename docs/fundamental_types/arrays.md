# Arrays

## Declaring

The type of the elements and the number of elements are
required:

```cpp
int my_array[100]; // an integer array of size 100
```

## Initializing

Declaring and initializing an array:

```cpp
int my_array[] = { 1, 2, 3, 4, 5 };
```

No need to specify the size, it is inferred from the number 
of the elements.

## Accessing elements

Access via the bracket syntax

```cpp
int my_array[] = { 1, 2, 3, 4, 5 };
printf("The 2nd element is %d", my_array[1]);
```

## Size of arrays

The `sizeof` operator is used to obtain the total number of bytes in aggregate in an array.
The evaluation is a compile-time eval with no cost during runtime.

```cpp
int ar[] = { 1, 2, 3, 4, 5 };
size_t n_elements = sizeof(ar) / sizeof(int); // used a lot in older code, a hack
```

The `std::size` function from the `<iterator>` header is a more modern approach

## More

- [Pointers and arrays](../reference_types/pointers.md#pointers-and-arrays)