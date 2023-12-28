# Pointers in C

In C, a pointer is a variable that stores the memory address of another variable. Pointers are powerful and often used for dynamic memory allocation, array manipulation, and efficient function arguments.

## Declaring Pointers

A pointer is declared by specifying the data type it points to, followed by an asterisk (`*`), and the name of the pointer. For example:

```c
int *ptr;  // Pointer to an integer
char *str; // Pointer to a character
```
## Initializing 
Pointers can be initialized with the address of a variable using the address-of operator (&). For example:
```
int num = 42;
int *ptr = &num; // Pointer 'ptr' now holds the address of 'num'
```
## Derefrencing 
Dereferencing a pointer means accessing the value it points to. This is done using the dereference operator (*). For example:
```
int value = *ptr; // 'value' now holds the value pointed to by 'ptr'
```
