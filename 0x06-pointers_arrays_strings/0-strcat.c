#include "main.h"
#include <string.h>
/**
 * *_strcat - entry point
 * @dest: string to print
 * @src: string to print
 * Return: 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[0])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
