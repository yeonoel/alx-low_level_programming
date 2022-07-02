#include "hash_tables.h"

/**
 * key_index - that gives the index at which
 * the key/value pair should be stored
 * in the array of the hash table
 * @key: is the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
