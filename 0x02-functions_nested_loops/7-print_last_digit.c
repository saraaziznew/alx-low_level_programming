#include "main.h"
/**
 * print_last_digit - print the last digit of the number
 * @n: input number as inger
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	if (l > 0)
	
		l = -1 * ( n % 10);
	else
		l = n % 10;
	_putchar(l + '0');
	return (l);
}
