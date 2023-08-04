#include <ctype.h>
#include "main.h"
/**
 * _islower - function to check the lowercase
 * @c : is a parameter using to comparei
 * Return: 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
