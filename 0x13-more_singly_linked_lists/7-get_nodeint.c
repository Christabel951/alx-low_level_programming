#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - find a given node in list using zero-based index
 * @head: pointer variable containing a 1st node address
 * @index: index value
 *
 * Description: search for node at given index_value and return its address
 * Return: pointer to node at given index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		num++;
		if ((num - 1) == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
