#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a linked
 *                           list at a given position.
 * @head: head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cpy_head = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = cpy_head;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (cpy_head == NULL || cpy_head->next == NULL)
			return (NULL);

		cpy_head = cpy_head->next;
	}

	new_node->next = cpy_head->next;
	cpy_head->next = new_node;

	return (new_node);
}
