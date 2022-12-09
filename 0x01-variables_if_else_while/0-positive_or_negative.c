#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and print it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)	
{
	printf("%i is zero\n", n);
}

	else if (n < 0)
{
	printf("%d is negative\n", n);
}

	else
{
	printf("%d is positive\n", n);
}

return (0);

}
