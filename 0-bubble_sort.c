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
	size_t s = size;
	int t;

	while (s-- && s >= 1)
	{
		i = 0;
		while (i < s)
		{
			if (array[i] > array[i + 1])
			{
				t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
				print_array(array, size); 
			}
			i++;
		}
	}
}
