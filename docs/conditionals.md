# Conditionals & Branching

## Conditional statements

The basic if statement can come in two flavors

```c++
// Inline
if(2 + 2 == 4) return true;

// Compound statement
if(2 + 2 == 4) {
    printf("Whoa!");
    return true;
}
```

## Switch statement

The traditional switch statement

```c++
switch (<condition>) {
    case (<case1>): {
    
    } break;
    case (<case2>): {
    
    } break;
    default: {
    
    }
}
```