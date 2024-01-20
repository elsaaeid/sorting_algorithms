#include "sort.h"

/**
 * swap - sorts an array of integers
 * using the Insertion sort algorithm
 * @temp: pointer to head of linked listint_t -a
 * @list: list of nodes
 *
 */
void swap(listint_t *temp, listint_t **list)
{
	listint_t *temp_x = NULL;

	temp_x = temp->prev, temp->prev = temp_x->prev;
	temp_x->next = temp->next, temp->next = temp_x;
	if (temp_x->next != NULL)
		temp_x->next->prev = temp_x;
	if (temp_x->prev != NULL)
		temp_x->prev->next = temp;
	if (temp_x->prev == NULL)
		*list = temp;
	temp_x->prev = temp, print_list(*list);
}
