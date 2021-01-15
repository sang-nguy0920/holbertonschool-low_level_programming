#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: i hash table you want to look into
 * @key: is the key looking for
 *
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *node;
if (!ht || !key)
return (NULL);
idx = key_index((unsigned char *)key, ht->size);
if (!ht->array || !(ht->array)[idx])
return (NULL);

node = (ht->array)[idx];
while (strcmp(node->key, key))
node = node->next;
return (node ? node->value : NULL);
}
