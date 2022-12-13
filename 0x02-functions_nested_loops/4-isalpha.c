#include "main.h"

/**
 * _isalpha - Checks if a charcater is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is a letter, lowercase or uppercase, 0 for otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
