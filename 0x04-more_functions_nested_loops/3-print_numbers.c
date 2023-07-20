#include "main.h"
/**
 * print_numbers - print 0 - 9
 * Return: 0 (success)
 */
int _putchar(char c);
void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
