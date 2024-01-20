#include "sort.h"

/**
 * insertion_sort_list - sorts an array of integers in ascending order
 * using the Insertion sort algorithm
 * @list: pointer to head of linked listint_t
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL, *temp = NULL;
	int a = 0, b = 0;

	if (!list || !*list || !(*list)->next)
		return;
	head = *list;
	while (head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			temp = head->next, head->next = head->next->next;
			if (head->next != NULL)
				head->next->prev = head;
			temp->next = head, temp->prev = head->prev;
			if (head->prev != NULL)
				head->prev->next = temp;
			if (head->prev == NULL)
				*list = temp;
			head->prev = temp, a = 1;
			print_list(*list), b = 0;
			while (temp->prev != NULL)
			{
				if (temp->n < temp->prev->n)
				{
					swap(temp, list);
					b = 1;
				}
				if (b == 0)
					temp = temp->prev;
				b = 0;
			}
		}
		if (a == 0)
			head = head->next;
		a = 0;
	}
}
