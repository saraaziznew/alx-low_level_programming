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
		_putchar(r + '1');
	}
	else
	{
		_putchar(r + '0');
	}
	return 0;
}
