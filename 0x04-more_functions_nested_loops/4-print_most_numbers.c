#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9
 * followed by a new line
 * and not print 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4');

		else
			_putchar(c);
	}
	_putchar('\n');
}
