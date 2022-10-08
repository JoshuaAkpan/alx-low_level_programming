#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: variable
 * Return: 98 (failure), memory address (success)
 */
void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);

	if (allocated == NULL)
		exit(98);

	return (allocated); 
}
