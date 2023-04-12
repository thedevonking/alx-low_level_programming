#include "hash_table.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key used to retrieve values
 * @value: string stored in the hash table
 * Description: In case of collision, new node added to beginning of the list
 * Return: 1 if it suceeded
 * 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned lont int index;
	hash_node_t *node, *temp;

	if (ht == NULL || key== NULL || strlen(key) == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)malloc(strlen(key) + 1);
	node->value = (char *)malloc(strlen(value) + 1);
	node->next = NULL;
	strcpy(node->key, key);
	strcpy(node->value, value);

	index = key_index((const unsigned char *)key, ht ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		temp = ht->array[index];
		while temp != (NULL)
		{
			if (strcmp(key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(node->key);
				free(node->value);
				free(node);
				return (1);
			}
			temp = temp->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
