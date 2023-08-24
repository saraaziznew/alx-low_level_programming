#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - function to print elements
 * @h: point to struct
 * Return: 0 (success)
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	if (h == NULL)
		printf("Linked list is empty");

	ptr = h;

	while (ptr != NULL)
	{
		printf("%s", ptr->str);
		ptr = ptr->next;
	}
	return (0);
}
