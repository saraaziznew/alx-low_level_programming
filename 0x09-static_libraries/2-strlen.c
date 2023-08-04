#include "main.h"
/**
 * _strlen - entry point
 * @s: string parameter input
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
