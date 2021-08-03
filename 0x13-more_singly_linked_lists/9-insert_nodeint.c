#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add node at a given index
 * @head: pointer to pointer variable containing a 1st node address
 * @idx: index value
 * @n: value of member n
 *
 * Description: search for node at given index_value, add a new node 
 * after it and return address of new node
 * Return: pointer to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *temp;
	listint_t *temphead;
	listint_t *new;

	if (!head || !*head)
		return (NULL);
	temphead = *head;
	while (temphead)
	{
		num++;
		if ((num - 1) == idx)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = NULL;
			temp = temphead->next;
			if (!temp)
			{
				temphead->next = new;
				return (new);
			}
			else
			{
				temphead->next = new;
				new->next = temp;
				return (new);
			}
		}

		temphead = temphead->next;
	}
	return (NULL);
}
