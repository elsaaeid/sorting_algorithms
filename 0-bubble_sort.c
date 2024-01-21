#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using a bubble
 * sort algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 1, r;
	int temp;
	bool swapped = true;

	if (!array || size < 2)
		return;

	r = size;
	while (swapped)
	{
		swapped = false;
		while (i < r)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = true;
				print_array(array, size);
			}
			i++
		}
		r--;
	}
}
