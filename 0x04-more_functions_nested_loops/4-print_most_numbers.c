#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9
 * followed by a new line
 * and not print 2 and 4
 * Return: Always 0.
 */

void print_most_numbers(void);
{
	char c = '0';

	while (c <= '9' && c != '2' && c != '4')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
