#include "main.h"
/**
 * *create_array - entry point
 * @size : string to print
 * @c: string to print
 * Return: 0 (success)
 */
char *create_array(unsigned int size, char c)
{
	int *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
