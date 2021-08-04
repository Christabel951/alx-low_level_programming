#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at a given index
 * @head: pointer to pointer variable containing a 1st node address
 * @index: index value
 *
 * Description: search for node at given index_value, delete node 
 * and return 1
 * Return: 1 if deletion successful else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *temphead;
	listint_t *temp;

	if (!head || !*head)
		return (-1);
	temphead = *head;
	while (temphead)
	{
		if (num == 0 && index == 0)
		{
			temp = temphead->next;
			*head = temp;
			return (1);
		}
		else if ((num + 1) == index)
		{
			while (num <= index)
			{
				temp = temphead->next;
				if (num == index)
					free(temphead);
				num++;
			}
			temphead->next = temp;
			return (1);
		}
		else
		{
			temphead = temphead->next;
			num++;
		}
	}
	return (-1);
}
