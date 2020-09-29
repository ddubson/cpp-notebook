# Arrays

## Declaring

The type of the elements and the number of elements are
required:

```c++
int my_array[100]; // an integer array of size 100
```

## Initializing

Declaring and initializing an array:

```c++
int my_array[] = { 1, 2, 3, 4, 5 };
```

No need to specify the size, it is inferred from the number 
of the elements.

## Accessing elements

Access via the bracket syntax

```c++
int my_array[] = { 1, 2, 3, 4, 5 };
printf("The 2nd element is %d", my_array[1]);
```