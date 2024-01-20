#include "sort.h"

/**
 * bubble_sort - Calls function
 * @array: Array to be sorted
 * @size: Size of array
 * Description: A function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * Return: 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y = 0;
	int temp;

	if (array == NULL)
		return;

	while (x < size - 1)
	{
		while (y < size - x - 1)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
			y++;
		}
		x++;
	}
}
