#include "lists.h"
/**
 * *add_nodeint_end - print in reverse
 * @head: string to print
 * @n: string to print
 * Return: 0 (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	
	if (!head || !new)
	{
		return (NULL);
	}
	
	new->next = NULL;
	new->n = n;
	
	if (*head)
	{
		new->next = *head;
	}
	*head = new;
	return (new);
}
