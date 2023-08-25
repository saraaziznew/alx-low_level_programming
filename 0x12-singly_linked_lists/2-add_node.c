#include "lists.h"
#include <stdlib.h>
/**
 * *add_node - function to add new node
 * @head: string to print
 * @str: string to print
 * Return: 0 (successs)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

	if (!head == !newhead)
		return (NULL);
	if (str)
	{
		newhead->str = strdup(str);
		if (!newhead->str)
		{
			free(newhead);
			return (NULL);
		}
		newhead->len = _strlen(newhead->str);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
