#include <stdio.h>

void print_array(int low, int high, int *array);
/**
* binary_search - search for a value in an array using divide and conquer
* @array: array of integers
* @size: size of integers
* @value: value to be searched for
* Return: index of value in array
*/


int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (high + low) / 2;
		if (array[mid] == value)
		{
			print_array(low, high, array);
			return (mid);
		}
		else if (value < array[mid])
		{
			print_array(low, high, array);
			high = mid - 1;
		}
		else
		{
			print_array(low, high, array);
			low = mid + 1;
		}
	}
	return (-1);
}


/**
* print_array - print an array of int
* @low: start index
* @high: end index
* @array: array of int
* Return: void
*/

void print_array(int low, int high, int *array)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i < high; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[high]);
}
