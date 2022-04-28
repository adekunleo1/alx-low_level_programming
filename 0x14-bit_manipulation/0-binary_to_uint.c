#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  string
 * Return: value
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int val = 0;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
		i++;
	}
	return (val);
}
