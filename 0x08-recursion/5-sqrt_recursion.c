#include "main.h"
/**
 * _sqrt_recursion - entry point
 * square - find square root
 * @val: string to print
 * @n: string to print
 * Return: 0 (success)
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
