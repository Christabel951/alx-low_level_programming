#include "lists.h"

/**
 * dlistint_len - compute the number of nodes in a doubly linked list
 * @h: pointer to the 1st node of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}

/**
 * delete_dnodeint_at_index - delete a node of a doubly linked list
 * at given index
 * @head: pointer to pointer to list
 * @index: position of the node to be deleted
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(temp) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
