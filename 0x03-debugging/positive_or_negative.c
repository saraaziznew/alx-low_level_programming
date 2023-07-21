#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - function to check if the numer is positive or negative
 * Return: 0
 */
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
