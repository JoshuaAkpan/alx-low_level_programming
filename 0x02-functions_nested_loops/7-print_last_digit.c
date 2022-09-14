#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: parameter
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lstdig = n % 10;

	if (n < 0)
		lstdig = lstdig * -1;
	_putchar(lstdig + '0');
	return (lstdig);
}
