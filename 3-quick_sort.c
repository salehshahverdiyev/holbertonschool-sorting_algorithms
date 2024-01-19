#include "sort.h"
/**
 * swap - Swaps two elements in an array
 * @array: The array containing the elements
 * @a: Index of the first element
 * @b: Index of the second element
 * Return: Nothing (void)
*/
void swap(int *array, size_t a, size_t b)
{
	int temp = array[a];

	array[a] = array[b];
	array[b] = temp;
}
/**
 * lomuto_partition - Partitions the array using the Lomuto scheme
 * @array: The array to be partitioned
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 * Return: The index of the pivot
*/
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	i++;
	if (i != high)
	{
		swap(array, i, high);
		print_array(array, size);
	}
	return (i);
}
/**
 * help_sort - Recursive function to perform quicksort
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the array
 * Return: Nothing (void)
*/
void help_sort(int *array, size_t low, size_t high, size_t size)
{
	if (low < high)
	{
		size_t pivot = lomuto_partition(array, low, high, size);

		if (pivot > 0)
			help_sort(array, low, pivot - 1, size);
		help_sort(array, pivot + 1, high, size);
	}
}
/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: Nothing (void)
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	help_sort(array, 0, size - 1, size);
}
