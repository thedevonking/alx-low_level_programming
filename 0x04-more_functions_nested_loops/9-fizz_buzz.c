#include "main.h"
#include <stdio.h>

/**
 * main - print number from 0 to 100, followed by a new line 
 * for the multiples of three, print fizz instead of the numbers 
 * for the multipes of five, print buzz instead of the numbers
 * Return: 0 
 */
int main(void)
{
	int i;

	for (i = 1;i1 <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf('\n');

	return (0);
}
