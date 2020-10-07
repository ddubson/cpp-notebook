# Classes

## const methods

Methods marked with const are treated as read-only,
meaning there cannot be any modification of object's
state within them.

The `const` operator is applied on after the name of
method.

```cpp
class Guitar {
public:
    int get_number_of_strings() const {
        return this->stringNumber;
    }
private:
    int stringNumber = 6;
};

void classes() {
    Guitar guitar{};
    printf("Number of strings: %d\n", guitar.get_number_of_strings());
}
```