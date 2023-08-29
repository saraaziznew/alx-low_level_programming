#include "lists.h"
/**
 * print_listint - to print the integer
 * @h: struct to print
 * Return: 0 (success)
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = NULL;
	int i = 0;

	head = h;
	if (head == NULL)
	{
		;
	}
	while (head != NULL)
	{
		i++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (i);
}
