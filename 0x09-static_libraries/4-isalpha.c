#include "main.h"
/**
 * _isalpha - show 1 if the input is a
 * letter another cases, show 0
 *
 * @c: the character in ASCI code
 *
 * Return: 1 for leteers. 0 for rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
