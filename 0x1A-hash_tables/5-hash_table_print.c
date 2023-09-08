#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int e;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (e = 0; e < ht->size; e++)
	{
		if (ht->array[e] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[e];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
