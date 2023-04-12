#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_tables_create - creates a hash table
 * @size: size of the array
 * Return: returns pointer to the newly created hash table
 * failure, returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL || size == 0)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
