#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer value
 * Return: 0
 */
void print_number(int n)
{
	int a = 0, b = 1;
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	while (n != 0)
	{
		n /= 10;
		a++;
	}
	while (a > 1)
	{
		b *= 10;
		a--;
	}
	while (b >= 1)
	{
		_putchar(num / b % 10 + '0');
		b /= 10;
	}
return (0);
}
