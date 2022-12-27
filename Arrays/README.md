
# Arrays

An array is a group of similar elements or data items of the same type collected at contiguous memory locations. In simple words, we can say that in computer programming, arrays are generally used to organize the same type of data.


## Advantages:
- It is a better version of storing the data of the same size and same type
- It enables us to collect the number of elements in it
- Arrays have a safer cache positioning that improves performance
- Arrays can represent multiple data items of the same type using a single name

## Disadvantages:
- In an array, it is essential to identify the number of elements to be stored
- It is a static structure, meaning that in an array, the memory size is fixed
- When it comes to insertion and deletion, it is a bit difficult because the elements are stored sequentially and the shifting operation is expensive

## Member functions
### Iterators:
begin
- Return iterator to beginning

end
- Return interator to end

rbegin
- Return reverse iterator to reverse beginning

rend
- Return reverse iterator to reverse end

cbegin
- Return const_interator to beginning

cend
- Return const_iterator to end

crbegin
- Return const_reverse_iterator to reverse beginning

crend
- Return const_reverse_interator to reverse end

### Capacity:
size
- Return size

max_size
- Return maximum size

empty
- Test whether array is empty

### Element access
operator[]
- Access element

at
- Access element

front
- Access first element

back
- Access last element

data
- Get pointer to data

### Modifiers
fill 
- Fill array with value

swap
- Swap content

