#include "main.h"

/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 * @s: parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}

	for (a = i - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
