#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @a: string to print
 * @n: string to print
 * Return: 0 (success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
