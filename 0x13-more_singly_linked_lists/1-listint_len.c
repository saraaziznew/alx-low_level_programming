#include "lists.h"
/**
 * listint_len - to print the integer
 * @h: struct to print
 * Return: 0 (success)
 */
size_t listint_len(const listint_t *h)
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
		head = head->next;
	}
	return (i);
}
