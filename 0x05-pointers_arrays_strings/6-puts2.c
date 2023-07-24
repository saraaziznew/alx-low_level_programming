#include "main.h"
/**
 * puts2 - entry point
 * @str: string to print
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
