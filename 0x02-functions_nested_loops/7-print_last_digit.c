#include "main.h"
/**
 * print_last_digit - print the last digit of the number
 * @n: input number as inger
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putcahr(1 + 48);
		return (1);
	}
}