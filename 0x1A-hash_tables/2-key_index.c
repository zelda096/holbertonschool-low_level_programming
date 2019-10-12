#include "hash_tables.h"
/**
* key_index - function
* @key: key constant
* @size: size of the hash table
* Description:  the key
* Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
