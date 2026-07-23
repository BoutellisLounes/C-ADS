# 🎓 C-ADS - Project 05: Dynamic Memory and Lists

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Work_In_Progress-orange.svg)

## 📌 About The Project

This module is part of my **C-ADS** (C - Algorithms and Data Structures) personal portfolio, developed during my ***1st year of Computer Science Engineering - Summer 2026***.

This module focuses entirely on **Singly Linked Lists**, **Stacks** and **Queues** in C. It is divided into multiple practical exercises to master pointer manipulation, memory allocation, and list traversal, stack and queue manipulation.

---

## ⚙️ Exercise 01: Student Grades Manager

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

## ⚙️ Exercise 02: Student Grades Manager using queues

This project implements a ***queue-based student management system***. It stores student records and provides operations for processing their algorithm grades, such as calculating statistics and counting students that satisfy specific conditions.

The `main` program demonstrates the implementation by calling the different functions and procedures developed throughout the exercise.

### Data Structure

The `Student` structure is identical to the one used in the previous linked-list project. The only difference is the underlying data structure: this project uses a **queue** instead of a **linked list**.
