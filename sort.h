#ifndef SORT_H_
#define SORT_H_

#include <stdlib.h>
#include <stdio.h>

/* Direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - The enumeration Boolean vls.
 * @false: equals 0.
 * @true: equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - The doubly linked list node
 *
 * @n: stored integer in the node
 * @prev: The pointer to the previous element of the list
 * @next: The pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Helper functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* The Sorting algoritms */
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);

#endif /* SORT_H_ */
