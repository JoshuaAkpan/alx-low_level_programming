#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: the parameter
 * Return: void
 */
void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
