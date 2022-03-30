#include "main.h"

/**
 * _puts_recursion - Prints a string followed by new line
 * @s: String pointer
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
