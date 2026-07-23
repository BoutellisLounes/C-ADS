# 🎓 Sub-Project 05: Dynamic Memory and Lists

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Completed-green.svg)

## 📌 About The Project

This module is part of my **C-ADS** (C - Algorithms and Data Structures) personal portfolio, developed during my ***1st year of Computer Science Engineering - Summer 2026***.

This module focuses entirely on **Singly Linked Lists**, **Queues**, and **Stacks** in C. It is divided into multiple practical exercises to master pointer manipulation, memory allocation, list traversal, and fundamental LIFO/FIFO logic.

---

## ⚙️ Exercise 01: Student Grades Manager (Linked Lists)

The objective of this first exercise is to manage a dynamic list of students and perform various calculations on their algorithmics grades. 

### Core Data Structure
The program relies on the following self-referential structure (Node):
```c
typedef struct student {
    char name[16];
    char surname[16];
    float algo_grade;
    struct student *next;
} student;

typedef student* Pstud;
```
## ⚙️ Exercise 02: Student Grades Manager (Queues - FIFO)

This exercise implements ***a queue-based student management system***. It stores student records and provides operations for processing their algorithm grades, such as calculating statistics and counting students that satisfy specific conditions.

The `main` program demonstrates the implementation by calling the different functions and procedures developed throughout the exercise.

### Data Structure
The `Student` structure is identical to the one used in the previous linked-list exercise. The only difference is the underlying data structure: *this exercise utilizes a queue (**First-In, First-Out**) instead of **a standard linked list***.
.
## ⚙️ Exercise 03: Student Grades Manager (Stacks - LIFO)
This third exercise implements ***a stack-based student management system***. It stores records of student information and provides counting and comparing operations based on their algorithm grades according to **specific initial conditions**.

The `main` program shows the detailed implementation by calling the different functions and procedures in the same way as previous exercises.

### Data Structure
As with the ***queue exercise***, the core data structure **remains identical**. It uses the same `Student` **record** containing the previous data about each student. The difference here is the underlying logic: this exercise uses a stack (***Last-In, First-Out***).
