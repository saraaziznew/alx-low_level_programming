#include "main.h"
/**
 * more-numbers - print 10 times the numbers since 0 up to 14
 * Return: 10 times the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int b;
	int c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
