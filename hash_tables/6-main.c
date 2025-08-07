#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Entry point to test hash_table_delete
 *
 * Return: Always 0
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "name", "Bob");
	hash_table_set(ht, "age", "25");
	hash_table_set(ht, "city", "San Francisco");
	hash_table_print(ht);
	hash_table_delete(ht);
	return (0);
}
