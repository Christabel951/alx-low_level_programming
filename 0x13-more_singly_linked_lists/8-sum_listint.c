#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - compute sum of data in all nodes of a list
 * @head: pointer variable containing 1st node's address
 *
 * Description: add all data values stored in a list and return the sum
 * Return: sum of data values in list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
