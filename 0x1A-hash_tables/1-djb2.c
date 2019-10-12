#include "hash_tables.h"
/**
* hash_djb2 - function
* @str: str to hash
* Description: if fail return null
* Return: * create hash table
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int table_;
	int c;

	table_ = 5381;
	while ((c = *str++))
	{
		table_ = ((table_ << 5) + table_) + c;
	}
	return (table_);
}
