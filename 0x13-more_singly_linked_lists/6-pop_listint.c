#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete/free first node
 * @head: pointer to pointer variable containing a 1st node address
 *
 * Description: delete head node of list
 * Return: head node's data of type int or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head)
		return (-1);
	if (!*head)
		return (0);
	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;
	return (num);
}
