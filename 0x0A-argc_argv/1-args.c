#include <stdio.h>
/**
 * main - entry point
 * @argc: string to print
 * @argv: string to print
 * Return: 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
