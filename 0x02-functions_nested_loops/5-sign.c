#include "main.h"
/**
 * print-sign - determine if the input number 
 * is greater equal or less thn zero
 * @n: the input number as an integer
 * Return: 1 if greater than zero. 0 if iqual zero 
 * -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
                return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
                return (0);
	}
	_putchar('\n');
}
