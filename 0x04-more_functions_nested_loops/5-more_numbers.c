#include "main.h"
/**
 * more-numbers - print 0 -14 ten times
 * Return: 0 (success)
 */
int _putchar(char c);
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
