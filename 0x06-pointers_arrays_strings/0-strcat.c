#include "main.h"
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
	while (dest[0] != '\0')
	{
		c++;
	}

	c2 = 0;
	while (src[c2] != '\0')
	{
		dest[c++] = src[c2];
		c++;
		c2++;
	}
	dest[i] = '\0';
	return (dest);
}
