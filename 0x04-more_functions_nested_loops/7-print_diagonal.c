#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character should be print
 */
void print_diagonal(int n)
{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			if (n > 1)
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
