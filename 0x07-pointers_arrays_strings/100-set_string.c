#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to address of string s
 * @to: string to set value to
 *
 * Return: (0)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
