#include "main.h"
/**
 * puts_half - entry point
 * @str: string to print
 * Return: 0 (success)
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\n'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
