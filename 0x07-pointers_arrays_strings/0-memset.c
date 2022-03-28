#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer
 * @b: constant bytes
 * @n: size of buffer to fill
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
