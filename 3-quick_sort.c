#include "sort.h"
#include <stdio.h>

/**
 * swap - Swaps two integers in an array
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Lomuto partition scheme for Quick Sort
 * @array: Pointer to the array to be partitioned
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Number of elements in the array
 * Return: Index of the pivot after partitioning
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
		swap(&array[i + 1], &array[high]);
		print_array(array, size);

	return (i + 1);
}

/**
 * lomuto_quick_sort - Recursive function to perform Quick Sort
 * @array: Pointer to the array to be sorted
 * @low: Starting index of the array
 * @high: Ending index of the array
 * @size: Number of elements in the array
 */
void lomuto_quick_sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high, size);

		lomuto_quick_sort(array, low, pivot - 1, size);
		lomuto_quick_sort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto partition scheme)
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_quick_sort(array, 0, size - 1, size);
}
