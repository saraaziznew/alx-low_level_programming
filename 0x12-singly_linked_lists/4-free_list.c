#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - function to free the list
 * @head: string to print
 * Return: 0 (success)
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
}
