#include "hash_tables.h"

/**
 * key_index - fetche's the index for key given
 * @key: The key index to get.
 * @size: The size of array of the hash table.
 *
 * Return: The index of the key-value.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
