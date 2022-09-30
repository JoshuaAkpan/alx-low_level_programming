#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: index variable
 * @argv: argument vector, which holds an array of strings
 *
 * Return: Always 0 (Success) else 1(failed).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
