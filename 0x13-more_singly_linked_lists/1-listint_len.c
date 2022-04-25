#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a list.
 * @h: linked list head.
 *
 * Return: list's length.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_size = 0;

	while (h)
	{
		node_size += 1;
		h = h->next;
	}
	return (node_size);
}
