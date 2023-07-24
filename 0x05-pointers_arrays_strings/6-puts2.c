#include "main.h"

/**
 * puts2 - prints second half of string
 * @str: string pointer
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
