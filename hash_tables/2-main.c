#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Entry point to test key_index
 *
 * Return: Always 0
 */
int main(void)
{
	char *keys[] = {
		"mentioner", "heliotropes", "neurospora", "depravement", "serafins",
		"stylist", "subgenera", "joyful", "synaphea", "redescribed",
		"urites", "dram", "vivency"
	};
	unsigned long int i;

	for (i = 0; i < sizeof(keys) / sizeof(keys[0]); i++)
	{
		printf("%s: %lu\n", keys[i],
		       key_index((const unsigned char *)keys[i], 1024));
	}
	return (0);
}
