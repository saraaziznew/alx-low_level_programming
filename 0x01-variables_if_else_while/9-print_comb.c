#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(',');
		putchar(n);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
