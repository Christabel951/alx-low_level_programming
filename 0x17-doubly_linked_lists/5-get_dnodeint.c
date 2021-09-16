#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of a
 * dlistint_t list
 * @head: pointer to first node of dlistint list
 * @index: index of node starting from 0
 *
 * Return: nth node of a dlistint_t linked list or NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head: NULL);
}
