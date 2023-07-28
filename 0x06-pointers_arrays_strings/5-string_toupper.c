#include "main.h"
/**
 * *string_toupper - entry point
 * @n: string to print
 * Return: 0 (success)
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
