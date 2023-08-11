#include "main.h"
/**
 * *malloc_checked - entry point
 * @b: string to print
 * Return: 0 (success)
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
