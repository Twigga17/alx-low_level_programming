#include "main.h"
/**
 * main - check the code
 * Description: Print 10 times the alphabet 
 * in lowercase then followed by new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
int main()
{
	repeat ('c', 10);
	return 0;
}
