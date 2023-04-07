#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int i;
hash_node_t *node;
short int j = 0;

if (ht == NULL)
	return;

putchar('{');
for (i = 0; i < ht->size; i++)
{
	node = ht->array[i];
	while (node != NULL)
	{
		if (j)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		node = node->next;

		if (j == 0)
			j = 1;
	}
}
printf("}\n");
}
