#include "main.h"
#include <string.h>
/**
 * *_memset - entry point
 * @s: string to print
 * @b: string to print
 * @n: string to print
 * Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
