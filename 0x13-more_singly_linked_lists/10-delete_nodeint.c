#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the linked list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy_head = *head;
	unsigned int node;

	if (cpy_head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy_head);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cpy_head->next == NULL)
			return (-1);

		cpy_head = cpy_head->next;
	}

	temp = cpy_head->next;
	cpy_head->next = temp->next;
	free(temp);
	return (1);
}
