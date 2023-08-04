#include <stdio.h>
/**
 * main - entry point
 * @argc: string to print
 * @argv: string to print
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", sum);
				}
		else
		{
		printf("Error\n");
		return (1);
		}
	return (0);
	}
