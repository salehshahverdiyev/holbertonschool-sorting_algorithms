#include "sort.h"

void
swap(int *array, size_t first, size_t second)
{
	int tmp = array[second];

	array[second] = array[first];
	array[first] = tmp;
}


void
selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; ++i)
	{
		min = i;
		for (j = i + 1; j < size; ++j)
			if (array[min] > array[j])
				min = j;

		if (min == i)
			continue;

		swap(array, i , min);
		print_array(array, size);
	}
}
