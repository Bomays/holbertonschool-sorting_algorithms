#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * @array: the integers array we want to sort
 * @size: the size of the array we want to sort
 *
 * Complexity time : O(n) if chars are well sorted at begining
 *                   O(n²) if not
 *
 * Return: void return
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp = 0, swap;
	size_t i;
	size_t n = size;

	if (array == NULL || size < 2)
	{
		return;
	}

	do {
		swap = 0;

		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
		n--;
	} while (swap);
}
