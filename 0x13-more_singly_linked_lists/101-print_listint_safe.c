#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head:head of the list_t list.
 *
 * Return:first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}

	(*head)->next = back;

	return (*head);
}
