#include "main.h"
/**
 * main - Entry point
 * Description: Program prints _putchar and moves to next line
 * Return: Always 0
 */
int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	putchar('\n');
	return (0);
}
