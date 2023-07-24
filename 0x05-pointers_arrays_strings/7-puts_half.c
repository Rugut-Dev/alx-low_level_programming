#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	char *p = str;
	int start;
	int i;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	start = (len + 1) / 2;
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
