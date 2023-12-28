# STORAGE CLASS #

A storage class defines the scope, visibility, and lifetime of a variable. Storage classes in C determine where a variable is stored in memory, how it can be accessed, and how long it retains its value. C provides several storage classes, each with its own characteristics. Here are the main storage classes in C along with their definitions:

| Characteristic            | auto           | register        | static          | extern          |
|---------------------------|----------------|-----------------|-----------------|-----------------|
| **Storage**               | Stack          | Register/Memory | Data Segment    | Data Segment    |
| **Scope**                 | Local to block | Local to block   | Local to block   | Global          |
| **Lifetime**              | Function call  | Function call   | Program         | Program         |
| **Default Initialization**| Garbage        | Garbage         | Zero            | Zero            |
| **Example Declaration**   | `auto int x;`  | `register int counter;` | `static int count = 0;` | `extern int globalVariable;` |

