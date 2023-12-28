# Jump Statements in C

## `break`

- **Usage:** Used in loops (`for`, `while`, `do-while`) and `switch` statements.
- **Functionality:** Terminates the nearest enclosing loop or `switch` statement and transfers control to the statement immediately following the loop or `switch`.
- **Example:**
  ```c
  for (int i = 0; i < 5; i++) {
      if (i == 3) {
          break; // Exit the loop when i is 3
      }
      // Code here is executed until i is 3
  }


## `goto` Statement

- **Usage:** Can be used to transfer control to a labeled statement within the same function.
- **Functionality:** Unconditionally transfers control to the labeled statement.
- **Example:**
  ```c
  for (int i = 0; i < 5; i++) {
      if (i == 3) {
          goto end_of_loop; // Jump to the labeled statement
      }
      // Code here is executed until i is 3
  }

  end_of_loop:
  // Code here is executed after the loop

# `continue` 

The `continue` statement is a control flow statement in C that is used in loops (`for`, `while`, `do-while`). Its primary purpose is to skip the rest of the loop's body and proceed to the next iteration.

## Usage

```c
for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue; // Skip the rest of the loop body when i is 2
    }
    // Code here is executed except when i is 2
}

## Functionality 

When the continue statement is encountered, it causes the loop to jump to the next iteration without executing the remaining code within the loop for the current iteration. In the example above, if i is equal to 2, the continue statement will skip the subsequent code and move to the next iteration.

# The `return` Statement in C

In C programming, the `return` statement is used to exit a function and return a value to the calling function. It is commonly used in functions that have a non-void return type.

## Syntax

The basic syntax of the `return` statement is as follows:

```c
return expression;
