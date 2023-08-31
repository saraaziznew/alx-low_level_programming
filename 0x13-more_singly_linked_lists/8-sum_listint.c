#include "lists.h"
/**
 * sum_listint - sum the list
 * @head:string to print
 * Return: 0 (success)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
