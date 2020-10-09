# Type inference

C++ has built-in type inference with the `auto`
keyword.

```cpp
auto the_meaning_of_life{ 42 }; // inferred as int
auto pi { 3.14f }; // inferred as float
auto phrase { "Hi!" }; // inferred as char[4]
```

## Pointers and reference type inference

For pointers and reference types, `auto` can be used similarly

```cpp
auto pi { 3.14f };
auto& pi_ref = pi; // inferred int reference
const auto& pi_const_ref = pi; // inferred const int reference

auto* pi_ptr = &pi; // inferred int pointer
const auto* pi_const_ptr = &pi; // inferred const int pointer
```