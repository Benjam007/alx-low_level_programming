#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: returns 0
 */

int main(void)
{
int num = 0;

for (num = 0; num <= 9; num++)
printf("%d\n", num);

return (0);
}
