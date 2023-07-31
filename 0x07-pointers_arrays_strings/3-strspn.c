#include "main.h"
/**
 * _strspn - entry point
 * @accept: string to print
 * @s: string to print
 * Return: 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
