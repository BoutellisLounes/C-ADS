# Sub-Project 03: Strings and Custom Structures

## Overview
In this third module, I explored the fundamentals of text manipulation and custom data types in C. I transitioned from handling basic numbers and mathematical arrays to learning how to handle words (strings) and complex records. The main focus of this section was to understand how the C language manages characters in memory and how to group different variables together using `struct` to model real-world concepts.

## Repository Structure & Exercises
This directory contains 4 specific programs, each demonstrating a key concept from my university coursework:

* **`01_palindrome_checker.c`**
    * **What it does:** This program reads a word from the user and checks if it reads exactly the same forwards and backwards (like "radar").
    * **Purpose:** To practice basic string manipulation and treating text as arrays of characters.

* **`02_verb_conjugator.c`**
    * **What it does:** It takes a regular French verb ending in "er" (1st group) and automatically conjugates it in the present tense.
    * **Purpose:** Learning how to modify, slice, and print specific parts of a string dynamically.

* **`03_complex_numbers.c`**
    * **What it does:** This program uses a custom structure to model complex numbers (real and imaginary parts) and calculates their sum and product.
    * **Purpose:** To get comfortable with creating custom data records (`struct`) and performing mathematical operations on them.

* **`04_store_inventory.c`**
    * **What it does:** It simulates a basic store inventory by combining a `struct Item` (Name, Price, Quantity) with an `enum` for the item categories (Food, Electronics, Other).
    * **Purpose:** This was a big step up because I learned how to model real-world items and link different custom types together.

## Key Takeaways
Working on this sub-project was highly rewarding because it changed how I think about code organization. Although manipulating strings in C (especially dealing with the hidden null terminator `\0`) was a bit tricky at first, it drastically improved my debugging skills. Building custom structures also gave me a solid foundation for creating more advanced architectures in software engineering.
