#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_table.h"

/**
 * main - check the code for 
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table-create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
