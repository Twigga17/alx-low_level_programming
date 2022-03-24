#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @str: input string
 * Return: string conversion
 */
char *rot13(char *str)
{
	int count = 0, x;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[count] != '\0')
	{
		x = 0;
		while (letters[x] != '\0')
		{
			if (str[count] == letters[x])
			{
				str[count] = rot13[x];
				break;
			}
			x++;
		}
		count++;
	}
	return (str);
}
