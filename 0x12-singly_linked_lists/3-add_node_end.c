#include "lists.h"
#include <string.h>
#include <strlib.h>
/**
 * add_node_end - to add node in the end
 * @head: string to print
 * @str: string to print
 * Return: 0 (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !newnode)
		return (NULL);
	if (str)
	{
		newnode->str = strdup(str);
		if (!newnode->str)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = strlen(newnode->str);
	}
		if (node)
		{
			while (node->next)
				node = node->next;
			node->next = newnode;
		}
		else
			*head = newnode;
		return (newnode);
	}
}
