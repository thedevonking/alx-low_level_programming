#include "main.h"
/**
 * _strlen - Print the lenght of a string
 * @s: charcter to check
 * Return: 0
 */
int _strlen(char *s)
{
<<<<<<< HEAD
	int a = 0;
	
	for (; *s++;)
			a++;
	return (a);
=======
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
>>>>>>> ffd7bcf612462fcb041d069c5fa978959fa9a6fc
}
