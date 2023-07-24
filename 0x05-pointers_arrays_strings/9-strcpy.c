#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	char *orig_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return orig_dest;
}
