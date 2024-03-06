#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of int in ascending order
 *                        using the Insertion sort
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev;

	current = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current)
	{
		prev = current->prev;

		while (prev && prev->n > current->n)
		{
			if (prev->next)
			prev->next->prev = current;

			current->prev = prev->prev;
			prev->next = current->next;

			if (current->next)
				current->next->prev = prev;

			current->next = prev;
			prev->prev = current;

			if (!current->prev)
				*list = current;

			print_list(*list);
			prev = current->prev;
		}

	current = current->next;
	}
}
