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
	size_t j, range;
	int tmp;
	bool swap = true;

	if (array == NULL || size < 2)
		return;
	range = size;
	while (swap)
	{
		swap = false;
		for (j = 1; j < range; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				swap = true;
				print_array(array, size);
			}
		}
		range--;
	}
}
