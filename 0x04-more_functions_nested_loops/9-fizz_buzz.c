#include "main.h"
#include <stdio.h>

/**
 * main - The program prints Fizz for a multiple of 3
 * it prints Buzz for a multiple of 5
 * and FizzBuzz for a multiple of 15
 * Return: returns 0
 */

int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 != 0)
{
printf("Fizz ");
}
else if (n % 5 == 0 && n % 3 != 0)
{
printf("Buzz ");
}
else if (n % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", n);
}
}
printf("\n");

return (0);
}
