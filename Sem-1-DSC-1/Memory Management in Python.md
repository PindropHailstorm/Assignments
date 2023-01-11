Memory Management is the process of storing memory dynamically and freeing it when not in use. Memory allocation can be defined as allocating a block of space in the computer memory to a program.
When the program forgets to release the memory allocated which is no longer needed, it's called a memory leak. This memory leak can be detrimental to the performance of the system. 

Memory allocation can be defined as allocating a block of space in the computer memory to a program.
In Python memory allocation and deallocation method is automatic as the Python developers created a garbage collector for Python so that the user does not have to do manual garbage collection. 

There are 2 parts of memory: Stack Memory and Heap memory. Stack memory is the memory that is only needed inside a particular function or method call.  When a method is called in Python, a stack frame is allocated. This stack frame will handle all the variables of the method. After the method is returned, the stack frame is automatically destroyed. This allocation onto a contiguous block of memory is handled by the compiler using predefined routines, and developers do not need to worry about it.

All objects and instance variables are stored in the heap memory. When a variable is created in Python, it is stored in a private heap which will then allow for allocation and deallocation. 

The heap memory enables these variables to be accessed globally by all your program’s methods. After the variable is returned, the Python garbage collector gets to work automatically. 
Python uses reference counting combined with generational garbage collection to free up unused memory. The reason why reference counting alone does not suffice for Python because it does not effectively clean up dangling cyclical references. 
A generational garbage collection cycle contains the following steps -

1. Python initializes a "discard list" for unused objects.
2. An algorithm is run to detect reference cycles.
3. If an object is missing outside references, it is inserted into the discard list.
4. Frees up memory allocation for the objects in the discard list.

Some ways for optimizing memory in Python:
1. Use Generators, Not Lists for Big Arrays: Because when working with lists, Python loads all the elements into memory, all at once. Generators, on the other hand, perform lazy evaluation i.e. they’ll return (yield) one element at a time, and therefore don’t need to load the whole sequence into memory at once
2. Use Numpy (or similar libraries) for extensive mathematical operations as these libraries are developed to be extremely memory efficient and optimized in how their underlying lower-level code performs heavy mathematical operations.
3. Use string formatting instead of '+' to concatenate strings. The reason for this is that strings are immutable in Python. For every ‘+’ operation in your statement, Python will create a new string in memory for the string pairs concatenated from left and right. So try Python’s string formatting using the % syntax or the .format( ) function, which is much more memory efficient.
4. Frees up memory allocation for the objects in the discard list.

Sources used:

https://www.geeksforgeeks.org/memory-management-in-python/ 

https://www.askpython.com/python/examples/memory-management-in-python


https://wearecommunity.io/communities/tectoniques/articles/978

https://scoutapm.com/blog/python-memory-management

https://scoutapm.com/blog/python-garbage-collection
