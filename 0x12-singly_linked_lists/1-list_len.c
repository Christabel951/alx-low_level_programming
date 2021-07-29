#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of nodes printed
 */
size_t list_len(const list_t *h)

{
	size_t nd = 0;

	while (h)
	{
		h = h->next;
		nd++;
	}
	return (nd);
}
