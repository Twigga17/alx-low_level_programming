#include "main.h"

/**
 * puts2 - prints character on string from first character
 * @str: pointer to int that will be changed.
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}
	_putchar ('\n');
}
