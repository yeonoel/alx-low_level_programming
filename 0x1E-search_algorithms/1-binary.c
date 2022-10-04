#include <math.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in array
 * @array: the pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search
 * Return: The first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L, R, mid, i;

	if (array == NULL)
		return (-1);
	R = size - 1;
	L = 0;
	while (L <= R)
	{
		mid = floor((L + R) / 2);
		printf("Searching in array: ");
		size = R + 1;
		for (i = L; i < size; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
		}
		printf("\n");
		if (array[mid] > value)
			R = mid - 1;
		else if (array[mid] < value)
			L = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
