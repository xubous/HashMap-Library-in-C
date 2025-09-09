# HashMap-Library-in-C
A complete hash map implementation in C with key-value storage, collision handling, and efficient data retrieval.

📋 Description

This C library provides a robust implementation of a hash map data structure using separate chaining for collision resolution. It features dynamic memory management, key-value pairing, and efficient data access operations.
✨ Features

    Key-Value Storage: Store and retrieve integer values using string keys

    Collision Handling: Separate chaining with linked lists

    Memory Management: Proper allocation and deallocation of resources

    Control Structure: Tracks both ends of the hash chain for efficient operations

    Debug Utilities: Built-in printing functions for visualization

📚 API Reference
Core Functions

    make_map_control() - Creates a new hash map control structure

    make_cell(char *key, int value) - Creates a new key-value cell

    connect_cell(ref_map current, ref_map predecessor, ref_control control) - Connects cells in the map

    print_cell(ref_map cell) - Displays cell contents

Utility Functions

    readInt(char *text) - Reads integer input with prompt

🛠️ Compilation
bash

gcc -Wall -Wextra -std=c99 -o hashmap hashmap.c main.c

⚠️ Important Notes

    Memory Management: Remember to free allocated cells and control structures

    Key Ownership: The library doesn't duplicate keys - manage key memory externally

    Collision Resolution: Uses separate chaining with linked lists

    Error Handling: Always check for NULL returns from allocation functions

📋 Requirements

    C99 compatible compiler

    Standard C library

🔄 Potential Enhancements

    Hash function implementation

    Dynamic resizing based on load factor

    Key duplication functionality

    Value type genericity using unions

    Iteration functions

    Removal operations

This implementation provides a solid foundation for building more advanced hash map features and can be extended based on specific application needs.
