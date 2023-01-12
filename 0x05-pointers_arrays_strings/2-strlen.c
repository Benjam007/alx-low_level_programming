#include "main.h"
#include

/**
 * _strlen - is a function that returns the length of a string
 * @s: parameteri
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
