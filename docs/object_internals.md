# Memory and Objects

An object is a region of storage, having a **type** and a **value**. Every variable is an object.

Every object requires storage in memory. 

The process of requesting memory storage is called **allocation**.

When the object is done being useful, it can be cleaned up and memory freed for use by other objects, that is called **deallocation**

**storage duration** of an object is the time between allocation and deallocation of that object.

**lifetime** of an object begins when the constructor is called, and ends when the destructor is called. (Bound by storage duration)

## Automatic objects & storage duration

!!!info
    An automatic object is allocated at the beginning of a code block and
    deallocated at the end of the code block

The start and end of a given code block is the **scope** of an automatic object.

Automatic objects have automatic storage durations -- storage duration is handled by way of scope, no extra handling necessary.

Automatic objects are deallocated just before the `return` has been invoked or the function has concluded.

Automatic objects are also more commonly known as **local variables**

## Static objects & storage duration

