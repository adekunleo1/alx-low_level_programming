#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number integer
 */

void print_binary(unsigned long int n)
{
	int i, iter = 0;
	unsigned long int value;

	i = 63;
	while (i >= 0)
	{
		value = n >> i;
		if (value & 1)
		{
			_putchar('1');
			iter++;
		}
		else if (iter)
			_putchar('0');
		i--;
	}
	if (!iter)
		_putchar('0');
}
