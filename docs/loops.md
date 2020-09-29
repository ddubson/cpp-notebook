# Loops

## The for loop

Traditional for loop with the following structure:

```c++
for(init-statement; conditional; iteration-statement) {
    // Do things
}
```

An example:

```c++
int sum = 0;
for(size_t i = 0; i < 100; i++) {
    sum += 2;
}
printf("The sum is %d", sum);
```

`size_t` is used to align to the potentially maximum allowed values
on a particular system. It is more safe to use `size_t` over `int`.

## Range-based for loop (C++11)

Iterating over iterable structures can be simplified by using
the range-based for loop

```c++
int my_array[] = {1, 2, 3, 4, 5};

for(int x : my_array) {
    printf("Array value: %d\n", x);
}
```