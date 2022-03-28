#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string with bytes
 * @accept: string with bytes
 * Return: pointer to byte in s that matches on of bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
