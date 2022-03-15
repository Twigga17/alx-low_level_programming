#include "main.h"
/**
 * main - main block
 *
 * Description: Print alphabet in lowercase then new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n')
}
