#include "lists.h"
/**
 * free_listint - free the list
 * @head: string to print
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
	        free(temp);
	}
}
