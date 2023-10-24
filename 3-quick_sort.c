#include "sort.h"

/**
 * lomunto_partition - lomunto alg
 *
 * @arr: pointer to array
 * @low: low index to start from
 * @high: high index to stop at the pivot
 * @size: size of arr
 */

void lomunto_partition(int *arr, size_t low, size_t high, size_t size)
{
	size_t i = low - 1;
	size_t j = low;
	int p, temp;

	if (low < high)
	{
		p = arr[high];
		while (j < high)
		{
			if (arr[j] <= p)
			{
				i++;
				if (i < j)
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					print_array(arr, size);
				}
			}
			j++;
		}
		i++;
		if (i != high)
		{
			temp = arr[i];
			arr[i] = arr[high];
			arr[high] = temp;
			print_array(arr, size);
		}
		lomunto_partition(arr, i + 1, high, size);
		if (i > 0)
			lomunto_partition(arr, low, i - 1, size);
	}
}

/**
 * quick_sort - quick sort alg
 * @array: pointer to array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size == 0)
		return;
	lomunto_partition(array, 0, size - 1, size);
}
