#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program prints the alphabet in lowercase, followed by a new line.
 * Return: returns 0
 */

int main(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
putchar(letters);
putchar('\n');
return (0);
}
