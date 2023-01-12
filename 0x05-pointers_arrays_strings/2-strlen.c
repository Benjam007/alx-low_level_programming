#include "main.h"

/**
 * _strlen - is a function that returns the length of a string
 * @s: parameter
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}

	return (len);
}
