# Dynamic Memory Allocation in C

Dynamic Memory Allocation (DMA) in C allows the program to allocate memory at runtime. This is particularly useful when you don't know the size of the data you'll be working with at compile time. C provides several functions for dynamic memory allocation, such as `malloc`, `calloc`, `realloc`, and `free`.

## `malloc` - Memory Allocation

The `malloc` function is used to allocate a specified number of bytes of memory. It returns a pointer to the beginning of the allocated memory.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Allocate memory for an array of 5 integers
    arr = (int *)malloc(5 * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }

    // Free the allocated memory when done
    free(arr);

    return 0;
} ```
## `calloc` Function

The `calloc` function is used to allocate a specified number of blocks of memory, each with a specified number of bytes. It initializes the allocated memory to zero.

### Syntax

```c
#include <stdlib.h>

void *calloc(size_t num_elements, size_t element_size);```

## `realloc` Function

The `realloc` function is used to resize a previously allocated block of memory. It takes two arguments: a pointer to the previously allocated memory block and the new size for the block.

### Syntax

```c
#include <stdlib.h>

void *realloc(void *ptr, size_t new_size);```