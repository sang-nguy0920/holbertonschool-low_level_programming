#include "hash_tables.h"

/**
 * hash_table_get - function that prints a hash table.
 * @ht: i hash table you want to look into
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *node;
int nodes = 0;

if (ht == NULL)
return;

printf("{");
while (i < ht->size)
{
node = ht->array[i];
while (node != NULL)
{
if (nodes == 0)
{
printf("'%s': '%s'", node->key, node->value);
nodes = 1;
}
else
printf(", '%s': '%s'", node->key, node->value);
node = node->next;
}
i++;
}
printf("}\n");
}
