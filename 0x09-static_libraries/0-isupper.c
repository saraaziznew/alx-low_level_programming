#include "main.h"
/**
 * _isupper - function that check uppercase letters
 * @c: char to check
 * Return: 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
