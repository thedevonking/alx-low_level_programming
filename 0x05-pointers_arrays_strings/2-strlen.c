#include "main.h"
/**
 * _strlen - Print the lenght of a string
 * @s: charcter to check
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
