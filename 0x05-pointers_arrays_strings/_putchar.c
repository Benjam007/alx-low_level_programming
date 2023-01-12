#include <unistd.h>

/**
 * _putchar - writes the character c to srdout
 * @c: The character to print
 * Return: On succes 1
 * On error, -1 is returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
