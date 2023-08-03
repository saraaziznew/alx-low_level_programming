#include "main.h"
/**
 * _strlen_recursion - entry point
 * @s: srting tp print
 * @n: string tp print
 * Return: 0 (success)
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += int _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
