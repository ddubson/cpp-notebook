# C++ Notebook

## Hello World!

Here's an example of probably the simplest C++ program that can yet be:

```c
// file: `main.cpp`
// C++ uses `#include` to import external libraries
#include <cstdio> 

int main() {
    printf("Hello, world!"); // `printf` procedure is part of `cstdio` library
    return 0;
}
```

## Running Hello World!

Use your favorite compiler (gcc, clang) to generate an output program

Here's an example `Makefile` task:

```makefile
run-hello-world:
	clang++ src/main.cpp -o bin/hello-world
	bin/hello-world
```

## Compiler toolchain

The C++ compiler toolchain is in three parts. The source code goes through three stages:

1. **preprocessor** - basic source code manipulation is done, such as replacing `#include` statements
with actual source code that was imported (flattens the program). Each source file that the preprocessor
works on produces a **translation unit** which is fed into the next stage, the compilation stage
2. **compiler** - reads a set of translation units from the previous stage, and generates **object files**.
Object files are an intermediate language (IL). Each translation unit corresponds to one object file. 
The output of a compiler is non-human readable format
3. **linker** - generates programs from object files from previous stage. Linkers grab your object files
and find external libraries that you are referencing and then merge them together into a cohesive output
program.

## C++ Compilers

Linux:

- clang++
- gcc

MacOs:

- clang++ (via XCode)
- gcc (install via Homebrew)

### Language standards

C++ has multiple successive versions with added features in each. To switch to a specific C++ standard,
tell the compiler to do so like so:

```bash
clang++ --std=C++11 main.cpp -o main
```

## C++ language attributes

- **Object-oriented language** - its bread and butter is to support object orientation, 
building up on plain C
- **Strongly-typed language** - every primitive and object has a defined type


---

`stdlib` - C++ standard library, which is split into three parts:

- containers
- iterators
- algorithms