#include <sort.h>

void
swap(int *array, size_t first, size_t second)
{
	int tmp = array[second];

	array[second] = array[first];
	array[first] = tmp;
}


void
bubble_sort(int *array, size_t size)
{
	size_t i = 0;

	for (; size > 0; --size)
		for (i = 0; i < size - 1; ++i)
			if (array[i] > array[i + 1])
				swap(array, i, i + 1);
}
