
# Stacks

Stacks are a type of container adaptor, specifically designed to operate in a LIFO context (last-in first-out) where elements are inserted and extracted only from one end of the container. A real life analogy could be a pile of CDs. To access the bottom CD, without picking up the entire pile, the only way to access the bottom CD would be to removed the CDs on top of it one by one, (essentially popping the CDs from the pile). Stacks are implmented as container adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements. Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack.

The standard container classes vector, deque, and list fulfill these requirements. By default, if no container class is specificed for a particular stack class instantiation, the standard container deque is used.


## Advantages:

- A stack helps to manage the data in the "Last in First out" method
- When the variable is not used outside the function in any program, the Stack can be used
- It allows you to control and handle memory allocation and deallocation
- It helps to automatically clean up the objects

## Disadvantages:

- It is difficult in Stack to create many objects as it increases the risk of the Stack overflow
- It has very limited memory
- In Stack, random access is not possible


## Member functions:

(constructor)
- Construct stack

empty
- Test whether container is empty

size
- Return size

top 
- Access next element

push
- Insert element

emplace
- Construct and insert element

pop
- Remove top element

swap
- Swap contents
