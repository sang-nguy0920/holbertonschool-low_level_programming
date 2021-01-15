#include "hash_tables.h"

/**
 *hash_table_create -  function that creates a hash table.
 *@size:  size of the array
 *
 *Description: function that creates a hash table.
 *section header: Section description
 *Return:  a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;

if (!size)
return (NULL);

ht = malloc(sizeof(hash_table_t) * 1);
if (!ht)
return (NULL);

ht->array = calloc(size, sizeof(hash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
ht->size = size;
return (ht);
}
