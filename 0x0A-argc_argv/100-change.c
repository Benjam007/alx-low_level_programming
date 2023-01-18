#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	/* number of arguments passed to your program is not exactly 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* use atoi function to convert character numerics to intergers */
	num = atoi(argv[1]);
	result = 0;

	/* if the number passed as the argument is negative, print 0 */
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	/* using a for loop to select ememts of the coins array */
	for (j = 0; j < 5 && num >= 0; j++)
	{
		/* keep subtracting value at coin[j] till num < coin[j] */
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
