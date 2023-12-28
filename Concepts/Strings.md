# String
A strings are represented as arrays of characters. The standard C library provides a set of functions for working with strings. The most common way to declare and initialize a string is by using an array of characters:

```#include <stdio.h>

int main() {
    // Declaring and initializing a string
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // '\0' denotes the null terminator

    // or, you can use a string literal:
    // char greeting[] = "Hello";

    printf("Greeting: %s\n", greeting); // %s is the format specifier for strings

    return 0;
}
```

## `strlen()`

Calculates the length of a string.

```#include <string.h>

int main() {
    char str[] = "Hello";
    int length = strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
```

## `strcpy` & `strncpy`

Copies one string into another.

```#include <string.h>

int main() {
    char source[] = "Hello";
    char destination[20];

    // Using strcpy
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    // Using strncpy
    strncpy(destination, source, 3); // Copy only the first 3 characters
    destination[3] = '\0'; // Null terminate the destination
    printf("Copied substring: %s\n", destination);

    return 0;
}
```

## `strcmp`
Compares the give strings.

```#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
```