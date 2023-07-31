#include "main.h"
/**
 * *_memcpy - entry point
 * @dest : string to print
 * @src: string to print
 * @n: string to print
 * Return: 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
