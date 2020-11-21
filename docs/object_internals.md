# Memory and Objects

An object is a region of storage, having a **type** and a **value**. Every variable is an object.

Every object requires storage in memory. 

The process of requesting memory storage is called **allocation**.

When the object is done being useful, it can be cleaned up and memory freed for use by other objects, that is called **deallocation**

**storage duration** of an object is the time between allocation and deallocation of that object.

**lifetime** of an object begins when the constructor is called, and ends when the destructor is called. (Bound by storage duration)

## Automatic objects & storage duration

An **automatic object** is allocated at the beginning of a code block and
deallocated at the end of the code block

The start and end of a given code block is the **scope** of an automatic object.

Automatic objects have automatic storage durations -- storage duration is handled by way of scope, no extra handling necessary.

Automatic objects are deallocated just before the `return` has been invoked or the function has concluded.

Automatic objects are also more commonly known as **local variables**

## Static objects & storage duration

A **static object** is declared at global scope (same level as functions).

Static objects have **static storage duration**, they are allocated when the program starts, and deallocated when program ends. They can be accessed from any function in the program

!!!warning
    Static globally accessible objects are dangerous. By default, a static variable is accessible from everywhere but is also mutable. This can lead to unexpected behavior if the variable is modified in multiple places and is not considered good practice. If you are using static objects, make sure to make them immutable via `const` keyword

Static objects are declared with `static` or `extern` keywords.

When you use the `static` keyword, an **internal linkage** is specified, meaning that this static variable is not accessible to other translation units.

When you use the `extern` keyword, an **external linkage** is specified, meaning that this static variable is accessible to other translation units.

## Local static objects

A local variant of the global static object. The lifetime of a local static object begins at enclosing function invokation and ends when the program exits.

## Static members

**Static members** are members of a class that are not associated with any given instance of that class, but are namespaced to that class. They have static storage duration for the duration of the program.

