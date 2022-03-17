#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of diagonal lines
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}

