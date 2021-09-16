#include "lists.h"

/**
 * dlistint_len - return number of elements in a linked
 * dlistint_t list
 * @h: pointer to the first node of dlistint list
 *
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (node_count);
	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
