#include "main.h"
/**
 * _strcmp - entry point
 * @s1: string to print
 * @s2:string to print
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 = *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
