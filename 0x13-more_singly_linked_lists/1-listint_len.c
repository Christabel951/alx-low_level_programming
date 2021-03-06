#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return the number of elements in listint_t list
 * @h: pointer variable containing 1st node address
 *
 * Description: use the h value to traverse through the
 * list whilst counting the number of elements/nodes in list
 * Return: number of nodes in link
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}


