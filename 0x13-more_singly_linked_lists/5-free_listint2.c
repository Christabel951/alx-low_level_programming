#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free list
 * @head: pointer to pointer variable containing 1st node's address
 *
 * Description: delete list and initializes *head to NULL
 */
void free_listint2(listint_t **head)
{
        listint_t *temp;

        if (!*head)
                return;
	temp = *head;
        while (*head)
        {
		temp =  temp->next;
		free(*head);
                *head = temp;
        }
	*head = NULL;
}
