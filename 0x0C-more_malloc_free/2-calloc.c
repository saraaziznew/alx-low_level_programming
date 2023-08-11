#include "main.h"
#include <stdlib.h>
/**
 * *_memset - entry point
 * @s:string to print
 * @b:string to print
 * @n:string to print
 * Return: 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc - entry point
 * @nmemb:string to print
 * @size:string to print
 * Return: 0 (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
