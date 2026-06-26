# Sub-Project 04: Functions and Recursion

## Overview
In this fourth module, I explored the fundamentals of functions, procedures, and recursion. I transitioned from manipulating structures and strings to learning how to handle subprograms and construct recursive logic from scratch. The main focus of this section was to understand how functions and procedures work and how to apply them to solve practical logic problems, simplifying repeated actions and reusing code whenever needed in the main program.

## Repository Structure & Exercises
This directory contains five specific programs, each demonstrating a key concept from my university coursework:

* **`01_prime_numbers.c`**
    * **What it does:** This program asks the user to enter an integer, checks if it is a prime number, and then calculates and displays a list of the first *m* prime numbers.
    * **Purpose:** To practice building functions with return values and get comfortable reusing them in the main program to avoid repeating the same code.

* **`02_array_reverse_swap.c`**
    * **What it does:** It takes an array of integers and reverses its elements by swapping them (the first with the last, the second with the second-to-last, etc.).
    * **Purpose:** Learning how to manage memory addresses using pointers and passing parameters by reference (address) to permanently modify data outside a function.

* **`03_power_and_factorial.c`**
    * **What it does:** Calculates the factorial and the power of a number using two completely different methods: standard iterative loops and recursive calls.
    * **Purpose:** Directly comparing iterative vs. recursive logic to understand how a function is capable of calling itself.

* **`04_fibonacci.c`**
    * **What it does:** Computes the *n-th* Fibonacci sequence number iteratively and recursively.
    * **Purpose:** Analyzing the performance and behavior of the computer's call stack during intensive recursive routines.

* **`05_employee_management.c`**
    * **What it does:** Manages a company's employee records (Name, Age, Grade) using separate modular procedures to read, sort, and display the data.
    * **Purpose:** Combining custom `struct` records with modular procedures to build a clean, well-architected mini-software.

## Key Takeaways
Working on this sub-project was highly rewarding because it forced me to think about code architecture and parameter passing via memory addresses. Although understanding recursion and visualizing the call stack was a bit challenging at first, it drastically improved my debugging skills. This module gives me a solid foundation for my future studies in low-level programming and networking, where efficient memory and resource management are crucial.
