#include "main.h"
/**
 * main - check the code
 * Prints the alphabet in lowercase 
 * Followed by new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
