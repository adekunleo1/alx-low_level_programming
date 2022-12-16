#include <stdio.h>

/**
* interpolation_search - search for a value in sorted array
* @array: array of integers
* @size: size of array
* @value: value to be searched for
* Return: index of value in array
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, high;

	if (array == NULL || size == 0)
		return (-1);
	l = 0;
	high = size - 1;

	while (l <= high)
	{
		pos = l + ((value - array[l]) / (array[high] - array[l])) * (high - l);
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		if (value < array[pos])
		{
			high = pos - 1;
		}
		else
		{
			l = pos + 1;
		}
	}
	return (-1);
}
