#include "sort.h"

/**
* shell_sort - Sorts array using Knuth Sequence of Shell sort
* @array: Array to be sorted
* @size: Size of array to sort
*/

void shell_sort(int *array, size_t size)
{
	size_t i, h = 1, k;
	int tmp;

	if (!array)
		return;
	while (h < size)
		h = 3 * h + 1;
	if (h >= size)
		h = (h - 1) / 3;
	while (h > 0)
	{
		i = h;
		while (i < size)
		{
			tmp = array[i];
			for (k = i; (k > h - 1) && (tmp < array[k - h]); k -= h)
			{
				array[k] = array[k - h];
			}
			array[k] = tmp;
			i++;
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
