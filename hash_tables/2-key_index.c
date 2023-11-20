#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the array of hash table
 *
 * Return: returns index of hash table wwith key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, key_return;

	hash_value = hash_djb2(key);

	key_return = hash_value % size;

	return (key_return);
}
