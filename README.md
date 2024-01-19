# Sorting Algorithms Project

This project implements several sorting algorithms, including Bubble sort, Insertion sort, Selection sort, and Quick sort. Each algorithm is designed to sort an array of integers or a doubly linked list of integers in ascending order. The project adheres to certain coding standards and restrictions.

## Files and Functions

- **sort.h**
  - Header file containing function prototypes, data structures, and include guards.
- **print_array.c**
  - Contains the `print_array` function to print an array of integers.
- **print_list.c**
  - Contains the `print_list` function to print a doubly linked list of integers.
- **0-bubble_sort.c**
  - Implements the Bubble sort algorithm for arrays.
- **1-insertion_sort_list.c**
  - Implements the Insertion sort algorithm for doubly linked lists.
- **2-selection_sort.c**
  - Implements the Selection sort algorithm for arrays.
- **3-quick_sort.c**
  - Implements the Quick sort algorithm (Lomuto partition scheme) for arrays.

## Compilation

The project will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`. Compilation commands may vary for different tasks.

## Usage

The main purpose of each file is to define and implement a specific sorting algorithm. The functions in each file have the following prototypes:

```c
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
```
