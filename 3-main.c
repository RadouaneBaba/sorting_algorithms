#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int arr2[] = {-5, 10, -3, 8, -1};
	int arr4[] = {5, 4, 3, 2, 1};
	int elem[] = {55};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	quick_sort(array, n);
	printf("\n");
	print_array(array, n);
	printf("\n");
	quick_sort(arr2, 5);
	quick_sort(arr4, 5);
	quick_sort(NULL, 10);
	quick_sort(elem, 1);
	return (0);
}
