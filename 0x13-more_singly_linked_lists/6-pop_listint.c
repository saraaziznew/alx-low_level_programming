#include "lists.h"
/**
 * pop_listint - pop the list
 * @head: string to print
 * Return: 0 (success)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
