#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: string used to generate hash value
 * @size: size of the hash table
 *
 * Return: index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
