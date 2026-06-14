# Sub-Project 02: Working with Arrays & Matrices

## Overview
In this second module, I moved from working with simple, single variables to managing larger groups of data. I focused on understanding how computer memory stores continuous sequences of information. By working on these exercises, I learned how to build and manipulate single-dimensional arrays (vectors) and two-dimensional arrays (matrices).

## Repository Structure & Exercises

This directory contains 5 specific programs based on my university lab sheets (PW4):

* **`01_array_statistics.c`**
    * **What it does:** This program reads 10 integers from the user, stores them in an array, and then automatically finds the minimum value, maximum value, total sum, and the average.
    * **Purpose:** To practice basic array loops and tracking values inside a data sequence.

* **`02_split_even_odd_array.c`**
    * **What it does:** It takes a main array of numbers and separates them into two separate arrays: one exclusively for even numbers and one for odd numbers.
    * **Purpose:** Learning how to manage multiple array indexes at the same time.

* **`03_array_left_shift.c`**
    * **What it does:** This script performs a sequential left shift on an array of characters (for example, moving the first letter to the end of the word).
    * **Purpose:** Practicing data movement and shifting logic within memory blocks.

* **`04_matrix_transpose.c`**
    * **What it does:** It initializes a 3x3 matrix using a mathematical formula ($M[i][j] = 3i+j$), prints the original grid, and then transposes it by swapping its rows and columns.
    * **Purpose:** Getting comfortable with nested `for` loops and 2D grid structures.

* **`05_matrix_diagonals.c`**
    * **What it does:** This program tracks specific elements inside a square matrix to calculate the sum of the main diagonal and the product of the secondary diagonal.
    * **Purpose:** Mastering coordinate tracking ($[i][j]$ indexes) in square grids.

## Key Takeaways
Managing array boundaries and index counters (especially keeping track of `i` and `j` in matrices) was a bit tricky at first, but it really helped me visualize how computer memory works. This section gave me the solid logic I need before moving on to more complex structures like text fields and custom records.
