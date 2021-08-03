#include <stdlib.h>
#include "lists.h"
/** free_listint - free list
 * @head: pointer variable containing 1st node address
 *
 * Description: free dynamic allocated memory
 * Return: address of new element or NULL if failed
 */
void free_listint(listint_t *head)
{
        listint_t *temp;

        if (!head)
                return;
        temp = head;
        while (temp->next)
        {
		head = temp->next;
		free(temp);
                temp = head;
        }
        free(temp);
}
