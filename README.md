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

## Time Complexity Analysis

For each sorting algorithm, the time complexity in big O notation is provided in separate files (0-O, 1-O, 2-O, 3-O). Each file contains the notations for the best case, average case, and worst case scenarios.

## Coding Standards

- The code follows the Betty style, as verified by `betty-style.pl` and `betty-doc.pl`.
- No global variables are used.
- No more than 5 functions are allowed per file.
- The standard library is not used, and functions like `printf`, `puts`, etc., are forbidden.

## Notes
- Arrays/lists with a size less than 2 do not need to be sorted.
- The project includes test functions (`print_array` and `print_list`) for displaying the state of arrays and linked lists during sorting.

## Authors

Ziyad Ibrahimov & Saleh Shahverdiyev.
