#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string pointer
 * @c: character in string
 * Return: Pointer to first character otherwise Null if no character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
