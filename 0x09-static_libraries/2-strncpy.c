#include "main.h"
/**
 * *_strncpy - entry point
 * @dest: string to print
 * @src: string to print
 * @n: string to pring
 * Return: 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for  (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
