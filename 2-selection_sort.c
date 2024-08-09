#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: the integers array we want to sort
 * @size: the size of the array we want to sort
 *
 * Complexity time : O(n²) always make all number comparison
 * when array is sorted and not sorted either
 *
 * Return: void return
 *
 */
void selection_sort(int *array, size_t size)
{
	int swap, tmp;
	size_t i, j, mini, n = size;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		mini = i;
		swap = 0;

		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[mini])
				mini = j;
		}

		if (mini != i)
		{
			tmp = array[i];
			array[i] = array[mini];
			array[mini] = tmp;
			swap = 1;
		}

		if (swap)
		{
			print_array(array, size);
		}
	}
}
