#include "lists.h"
/**
 * list_len - get length of node
 * @h: string to print
 * Return: 0 (success)
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
