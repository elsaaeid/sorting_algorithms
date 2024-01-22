#include "sort.h"

/**
 * Swap two elements in an array.
 * @param xp Pointer to first element.
 * @param yp Pointer to second element.
 */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
 * Selection sort algorithm.
 * @param array Pointer to the array to be sorted.
 * @param size Size of the array.
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
          if (array[j] < array[min_idx])
            min_idx = j;

        if (min_idx != i)
        {
            swap(&array[min_idx], &array[i]);
            print_array(array, size);
        }
    }
}
