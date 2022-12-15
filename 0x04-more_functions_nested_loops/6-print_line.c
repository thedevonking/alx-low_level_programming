#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: number of lines the character _ should be printed
 * Return: void
 */
void print_lines(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int 1;

		for (i = 1; i <= n, i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
