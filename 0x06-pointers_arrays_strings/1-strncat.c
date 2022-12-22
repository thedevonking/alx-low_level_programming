#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @src: source of string
 * @dest: destination of strings
 * @n: length of int
 * Return: pointer to go the the string destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest [i + j] = '\0';
	return (dest);
}
