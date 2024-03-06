#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* print_array function */
void print_array(const int *array, size_t size);

/* print_list function */
void print_list(const listint_t *list);

/* Task 0 - Bubble Sort function */
void bubble_sort(int *array, size_t size);

/* Task 1 - Insertion Sort function */
void insertion_sort_list(listint_t **list);

/* Task 2 - Selection Sort function */
void selection_sort(int *array, size_t size);

/* Task 3 - Quick Sort function */
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
