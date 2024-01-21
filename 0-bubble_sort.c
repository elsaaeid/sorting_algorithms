#include "sort.h"

/**
 * bubble_sort - Calls function
 * @array: Array to be sorted
 * @size: Size of array
 * Description: Function that sorts an array using the bubble sort method
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int x, y;

	if (!array)
		return;

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				swap(&array[y], &array[y + 1]);
				print_array(array, size);
			}
		}
	}
}
