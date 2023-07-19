#include <ctype.h>
#include "main.h"
/**
 * islowe - function to check the lower case
 * Return: 0 (success)
 */
int _islower(int c)
{
	int r;

	r = islower(c);
	if (r == 'c')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return 0;
}
