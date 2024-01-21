#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using an insertion sort algorithm
 * @list: doubly linked list of integers to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *nex, *new, *tmp;

	if (!list || !(*list) || !((*list)->next))
		return;

	nex = (*list);
	curr = (*list)->next;
	while (curr)
	{
		new = curr->next;
		while (nex && curr->n < nex->n)
		{
			if (nex->prev)
				nex->prev->next = curr;
			else
				*list = curr;
			if (curr->next)
				curr->next->prev = nex;
			tmp = curr->next;
			curr->next = nex;
			curr->prev = nex->prev;
			nex->next = tmp;
			nex->prev = curr;
			print_list(*list);
			nex = curr->prev;
		}
		curr = new;
		if (curr)
			nex = curr->prev;
	}
}
