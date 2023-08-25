#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - function to get length
 * @s: string to print
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - function to print elements
 * @h: point to struct
 * Return: 0 (success)
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		printf("[%d] %s\n", _strlen(ptr->str), (ptr->str) ? (ptr->str) : "(nil)");
	       ptr = ptr->next;
		i++;
	}
	return (i);
}
