#include "sort.h"

/**
 * swap - Swap two integers in an array
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Implements the Lomuto partition scheme
 * @array: The array to sort
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 *
 * Return: The partition index
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort_lomuto - Helper function to implement quick sort
 * @array: The array to sort
 * @low: The starting index of the array
 * @high: The ending index of the array
 * @size: The size of the array
 */
void quick_sort_lomuto(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high, size);

		quick_sort_lomuto(array, low, pi - 1, size);
		quick_sort_lomuto(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm with Lomuto partition scheme
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_lomuto(array, 0, size - 1, size);
}

