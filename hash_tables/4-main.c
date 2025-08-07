#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Entry point to test hash_table_get
 *
 * Return: Always 0
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	value = hash_table_get(ht, "betty");
	printf("%s\n", value);
	return (0);
}
