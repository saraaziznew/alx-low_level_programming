#include "main.h"
/**
 * _strlen - entry point
 * @s: string to print
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
