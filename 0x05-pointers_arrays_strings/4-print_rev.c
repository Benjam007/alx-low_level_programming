#include "main.h"

/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line.
 * @s: parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int a;

	for (i = 0; s[i] != '0'; i++)
	{
		continue;
	}
	i--;
	for (a = 0; a <= i; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
