#include "sort.h"

/**
 * selection_sort - selection algorithm
 * @array: pointer to array
 * @size: size of arr
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int n;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[i])
			{
				n = array[i];
				array[i] = array[j];
				array[j] = n;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
