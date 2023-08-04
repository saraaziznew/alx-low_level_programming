#include <stdio.h>
/**
 * main - entry point
 * @argc: string to print
 * @argv: string to print
 * Return: 0 (success)
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
