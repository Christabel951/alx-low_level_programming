#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add node at beginning of list
 * @head: pointer to a poiter variable containing 1st node address
 *
 * Description: allocate memory for a new node, assign value
 * of *head to new [new now points to the 1st node] and assign
 * address of new to head [head now points to new as the 1st node]
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
