#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - checks the code for ALX-Africa Cohort 5 students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_tables_t *ht;

	ht = hash_table_create(1024);
	print("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}

