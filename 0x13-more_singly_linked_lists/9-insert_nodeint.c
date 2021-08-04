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
	unsigned int num;
	listint_t *temphead;
	listint_t *new;

	if (!head || !*head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	temphead = *head;
	num = 0;
	while (temphead && num <idx)
	{
		if (num == (idx - 1))
		{
			new->next = temphead->next;
			temphead->next = new;
			return (new);
		}
		temphead = temphead->next;
	}
	return (NULL);
}
