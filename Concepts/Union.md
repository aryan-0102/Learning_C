# UNION
An union is a user-defined data type that allows you to store different data types in the same memory location. Unlike structures, where each member has its own memory space, all members of a union share the same memory space. The size of a union is determined by the size of its largest member. The syntax for defining a union is similar to that of a structure:
```
union union_name {
    data_type member1;
    data_type member2;
    // Additional members as needed
};
```
Unions are often used in situations where you need to represent a value that can be of different types, and you only need to use one type at a time. They are commonly used in low-level programming and situations where memory efficiency is crucial.