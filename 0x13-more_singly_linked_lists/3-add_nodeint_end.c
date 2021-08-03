#include <stdlib.h>
#include "lists.h"
/** add_nodeint_end - add node at end of list
 * @head: pointer to a poiter variable containing 1st node address
 *
 * Description: create a new node on heap, check for errors in
 * allocation of memory process.Init the node with values n and NULL
 * [being the last element of list].Check for empty list.Use a loop
 * pointer variable to loop through until NULL.Assign the last element
 * the address of new [new is now the last node with a pointer to NULL]
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
