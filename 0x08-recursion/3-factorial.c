#include "main.h"
/**
 * factorial - entry point '
 * @n: string to print
 * Return: 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial ( n - 1));
	}
}
