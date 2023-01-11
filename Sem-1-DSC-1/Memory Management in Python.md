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


