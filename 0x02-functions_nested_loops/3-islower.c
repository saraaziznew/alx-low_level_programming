#include <ctype.h>
#include "main.h"
/**
 * _islower - function to check the lower case
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
