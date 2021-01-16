#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int size, x = 0;

if (ht && ht->array)
{
size = ht->size;
while (x < size)
{
node = (ht->array)[x];
while (node)
{
tmp = node->next;
if (node->key)
free(node->key);
if (node->value)
free(node->value);
free(node);
node = tmp;
}
x++;
}
free(ht->array);
free(ht);
}
}
