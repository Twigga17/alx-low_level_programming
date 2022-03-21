#include "main.h"

/**
 * swap_int - a afunction that swaps the values of two integers
 *
 * @a: parameter
 * @b: parameter
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
