#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @string: string to be converted
 * Return: char_type
 */
char *string_toupper(char *string)
{
	char *ptr = string;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = (*ptr) - ('a' - 'A');
		}
		ptr++;
	}
	return (string);
}
