#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 *                  the selection sort algorithm
 *
 * @array: array of integers to be sorted
 * @size: number of integers in @array
 *
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, new;
	int temp;

	if (size < 2 || array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		new = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[new])
			{
				new = j;
			}
		}
		if (new != i)
		{
			temp = array[i];
			array[i] = array[new];
			array[new] = temp;
			print_array(array, size);
		}
	}
}
