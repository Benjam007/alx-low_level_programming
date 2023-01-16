#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to memory destination
 * @src: pointer to memory source
 * @n: lenght of buffer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
