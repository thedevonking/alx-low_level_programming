#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * key_index - returns the index of a key 
 * @key: key
 * @size: size of the array od the hatshtable
 * Return: index where key/value pair should be stored 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key != NULL && size)
	{
		index = hash_djb2(key) % size;
		return (index);
	}
	exit(-1);
}
