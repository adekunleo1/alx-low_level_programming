#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * linear_search_algorithms - used to search for a value in an array of
 * integers.
 *
 * @array: input array
 * @size: size of the array
 * @value: value of the search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
