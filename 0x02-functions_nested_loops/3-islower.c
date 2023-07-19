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
	if (r == 99)
	{
		_putchar(49 + r);
	}
	else
	{
		_putchar(48 + r);
	}
	return 0;
}
