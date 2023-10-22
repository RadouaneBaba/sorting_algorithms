#include "sort.h"

/**
 * selection_sort - selection algorithm
 * @array: pointer to array
 * @size: size of arr
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int t, changed, n;

	i = 0;
	while (i < size)
	{
		changed = 0;
		j = i + 1;
		t = array[i];
		while (j < size)
		{
			if (array[j] < t)
			{
				t = array[j];
				changed = 1;
				n = j;
			}
			j++;
		}
		if (changed == 1)
		{
			t = array[i];
			array[i] = array[n];
			array[n] = t;
			print_array(array, size);
		}
		i++;
	}
}
