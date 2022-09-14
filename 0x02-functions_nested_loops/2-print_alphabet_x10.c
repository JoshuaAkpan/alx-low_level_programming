#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int count;

	count = 0;

	do {
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');

		count++;
	} while (count < 10);
}
