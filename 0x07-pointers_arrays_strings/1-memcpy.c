#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area pointer
 * @src: source memory area pointer
 * @n: bytes of memory to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
