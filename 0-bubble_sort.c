#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort alg
 *
 * @array: array of ints
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int t;

	while (size-- && size >= 1)
	{
		i = 0;
		while (i < size)
		{
			if (array[i] > array[i + 1])
			{
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
			i++;
		}
	}	
}
