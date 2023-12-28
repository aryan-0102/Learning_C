### [Precedence](https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/)
Operator precedence determines which operation is performed first in an expression with more than one operator with different precedence.
### [Associativity](https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/)
Operator associativity is used when two operators of the same precedence appear in an expression. Associativity can be either from Left to Right or Right to Left. 

| Operator                    | Associativity | Precedence |
| --------------------------- | ------------- | ---------- |
| `()` (function call)        | Left          | Highest    |
| `[]` (array subscript)       | Left          |           |
| `->` (member access via pointer) | Left       |           |
| `.` (member access via object)  | Left       |           |
| `++`, `--` (postfix)         | Left          |           |
| `++`, `--` (prefix)          | Right         |           |
| `+`, `-` (unary plus, minus)| Right         |           |
| `!`, `~` (logical/bitwise NOT) | Right      |           |
| `*`, `/`, `%` (multiplication, division, modulus) | Left |     |
| `+`, `-` (addition, subtraction) | Left        |           |
| `<<`, `>>` (bitwise shift)   | Left          |           |
| `<`, `<=`, `>`, `>=`         | Left          |           |
| `==`, `!=` (equality, inequality) | Left      |           |
| `&` (bitwise AND)            | Left          |           |
| `^` (bitwise XOR)            | Left          |           |
| `|` (bitwise OR)             | Left          |           |
| `&&` (logical AND)           | Left          |           |
| `||` (logical OR)            | Left          |           |
| `? :` (conditional)          | Right         |           |
| `=` (assignment)             | Right         |           |
| `+=`, `-=`, `*=`, `/=`, `%=` | Right         |           |
| `<<=`, `>>=` (bitwise shift assignment) | Right |        |
| `&=`, `^=`, `|=` (bitwise assignment) | Right    |        |
| `,` (comma)                  | Left          | Lowest     |
