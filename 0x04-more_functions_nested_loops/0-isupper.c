#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: char type letter
 *
 * Return: 1 if c is uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
