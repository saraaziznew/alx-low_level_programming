#include "main.h"
/**
 * _isdigit - function that check if number are 0 - 9
 * @c: char to be checkd
 * Return: 0 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
