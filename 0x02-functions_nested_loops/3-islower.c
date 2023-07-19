#include <ctype.h>
#include "main.h"
/**
 * islowe - function to check the lower case
 * Return: 0 (success)
 */
int _islower(int c)
{
	int i;
	int r;

	for (i = 97; i <= 122; i++)
	{
		r = islower(i);
	        if (r == 99)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	
	}
}
