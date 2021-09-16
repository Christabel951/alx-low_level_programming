#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of a
 * dlistint_t list
 * @head: pointer to pointer of first node of dlistint list
 * @n: an unchangeable integer value to be assigned to new node
 *
 * Return: adress of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{	
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
