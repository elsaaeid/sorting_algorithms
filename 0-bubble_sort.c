#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using a bubble
 * sort algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp;
	bool swap = true;

	if (!array || size < 2)
		return;
	n = size;
	while (swap)
	{
		swap = false;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				swap = true;
				print_array(array, size);
			}
		}
		n--;
	}
}
