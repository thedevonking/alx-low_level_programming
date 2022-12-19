#include "main.h"
/**
 * swap_int - swap the value of int a and int b
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
