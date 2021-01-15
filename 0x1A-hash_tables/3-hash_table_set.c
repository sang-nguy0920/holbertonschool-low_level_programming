#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: i hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *new;
hash_node_t *tmp;

if (ht == NULL)
return (0);

if (key == NULL || key[0] == '\0')
return (0);

if (ht->size == 0 || ht->array == NULL)
return (0);

idx = key_index((unsigned char *)key, ht->size);
tmp = ht->array[idx];

while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
return (1);
}
tmp = tmp->next;
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = strdup(key);
new->value = strdup(value);
if (ht->array[idx] != NULL)
new->next = ht->array[idx];
else
new->next = NULL;
ht->array[idx] = new;
return (1);
}
