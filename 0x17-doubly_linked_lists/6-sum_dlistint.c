#include "lists.h"
/**
 * sum_dlistint - compute sum of all data in dlistint_t list
 * @head: pointer to first node of dlistint list
 *
 * Return: sum or 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
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
