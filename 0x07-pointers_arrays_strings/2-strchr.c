#include "main.h"
/**
 * *_memcpy - entry point
 * @c: string to print
 * @s: string to print
 * Return: 0 (success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
