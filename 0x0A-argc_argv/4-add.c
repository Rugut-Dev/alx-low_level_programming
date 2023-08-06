#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive nums passed
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int result, i, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	result = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);

		if (num < 0)
		{
			printf("Erro\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
