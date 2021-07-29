#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - free inked list
 * @head: pointer to start of node links
 */
void free_list(list_t *head)
{	
	list_t *temp;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
