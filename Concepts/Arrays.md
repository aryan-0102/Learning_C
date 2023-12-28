# ARRAY

An array is a collection of elements of the same data type, stored in contiguous memory locations. The elements are accessed using an index or a subscript, and the index starts from 0. 

SYNTAX : data_type array_name[array_size];

Declaration : int numbers[5] ;

Initialisation : numbers[5] = {1, 2, 3, 4, 5};
                    OR

Initialising while declaring an array ------> int numbers[5] = {1, 2, 3, 4, 5};

## Some important things to know : ##

1. **Array Indices Start from 0:** The first element in a C array is accessed using index 0, the second with index 1, and so on.

2. **Array Size Must Be a Constant Expression or Literal Value:** The size of a C array must be specified as a constant expression or a literal value during declaration.

3. **Arrays Are Passed to Functions by Reference (Address):** When passing arrays to functions in C, they are passed by reference, meaning the function receives the memory address of the array, not a copy of the entire array.

4. **No Automatic Bounds Checking for Arrays:** C does not automatically check array bounds. It is the responsibility of the programmer to ensure that array indices are within bounds to avoid undefined behavior.

