#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: pointer to the first node of dlistint list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (node_count);
	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
