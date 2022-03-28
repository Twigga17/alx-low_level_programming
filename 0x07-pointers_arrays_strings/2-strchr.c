#include "main.h"

/**
 * *_strchr - main function
 * @s: pointer to the string
 * @c: character to locate in the string
 *
 * Description: this function locates a character in a string.
 *
 * Return: a pointer to the first occurence of the character c
 * in the string s, or NULL if the character is not found.
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
	return (!c ? s : NULL);
}
