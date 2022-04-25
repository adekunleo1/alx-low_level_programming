#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a linked list.
 * @head: head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int _sum = 0;

	while (head)
	{
		_sum += head->n;
		head = head->next;
	}

	return (_sum);
}
