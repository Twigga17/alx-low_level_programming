#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit 0 to 9
 *
 * @c: char type letter
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
